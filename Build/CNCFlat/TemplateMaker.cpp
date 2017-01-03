#include "TemplateMaker.h"
#include "CNCConstants.h"
#include <QVector>
#include <QColor>
#include <QPainter>
#include <QStringList>

QImage TemplateMaker::genImg(unsigned long w, unsigned h)
{
    QImage tmpl(w, h, QImage::Format_RGB32); //, QImage::Format_Indexed8
    QImage result;
    QVector<QRgb> table(IMG_MAX_CLR_TBL);
    QStringList labels;
    Qt::Alignment al = Qt::AlignVCenter | Qt::AlignHCenter;

    QPainter paint(&tmpl);
    int x = 0;

    labels <<"void" << "void" << "void" << "void" << "skip over" << "start" << "etch" << "cut";

    table[0] = qRgb(0,0,0); //void1 (background)
    table[1] = qRgb(255,255,255); //void2
    table[2] = qRgb(100,100,100); //void3
    table[3] = qRgb(0,0,0); //void4
    table[4] = qRgb(255,0,0); //avoid
    table[5] = qRgb(0,255,0); //start
    table[6] = qRgb(255,0,255); //etch
    table[7] = qRgb(0,0,255); //cut

    tmpl.setColorTable(table);

    paint.fillRect(0,0,w,h, QColor(table[0]));
    for(int i = 0; i < IMG_MAX_CLR_TBL; i++)
    {
        paint.fillRect(x,0,64,16, QColor(table[i]));
        paint.setPen(QColor(table[1]));
        paint.drawText(x, 16, 64, 16, al, labels[i]);
        x+=64;
    }

    paint.drawLine(0,31,w,31);
    result = tmpl.convertToFormat(QImage::Format_Indexed8);
    result.setColorTable(table);
    return result;
}
