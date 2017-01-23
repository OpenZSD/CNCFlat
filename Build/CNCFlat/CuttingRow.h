#ifndef CUTTINGROW_H
#define CUTTINGROW_H

#include <vector>
#include <QImage>
#include <QColor>
#include "CNCTypes.h"

using namespace std;

class CuttingRow
{
public:
    CuttingRow(long row, QImage &img, QColor &maskColor);
    bool fits(long left, long right);
    bool contains(FlatPt pt);


private:
    vector<FlatPair> mSlices;

};

#endif // CUTTINGROW_H
