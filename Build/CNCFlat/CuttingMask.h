#ifndef CUTTINGMASK_H
#define CUTTINGMASK_H

#include <QImage>
#include <QColor>
#include <vector>
#include "CuttingRow.h"

using namespace std;

class CuttingMask
{
public:
    CuttingMask(QImage &img, QColor &maskColor, QColor &avoidColor);
    void generateRoute(int width, bool allowOverCuts);
    void getRouteMap(const QColor &mapColor, QImage img);
    void getPath(vector<FlatFlPath> &path, FlatPt &center, float distToPix);

protected:
    int getLowestRow();

private:
    vector<int> mBitWidth;
    vector<CuttingRow> mCuttingRows;
    vector<CuttingRow> mObstacles;
};

#endif // CUTTINGMASK_H
