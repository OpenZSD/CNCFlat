#include "CuttingRow.h"

CuttingRow::CuttingRow(long row, QImage &img, QColor &maskColor)
    :  mSlices(vector<FlatPair>())
{
    FlatPair range;
    bool startedSeg = false;

    range.to.y = row;
    range.from.y = row;

    for(long x = 0; x < img.width(); x++)
    {
        if(startedSeg)
        {
            if(QColor(img.pixel(x, row)) != maskColor)
            {
                startedSeg = false;
                range.to.x = x - 1;
                mSlices.push_back(range);
            }
        }
        else
        {
            if(QColor(img.pixel(x, row)) == maskColor)
            {
                startedSeg = true;
                range.from.x = x;
            }
        }
    }
}

bool CuttingRow::fits(long left, long right)
{
    long halfSize = mSlices.size()/2;
    long index = halfSize;
    int comp;

    auto compare = [](long x, FlatPair &range) -> int
    {
        return x < range.from.x ? -1 : (x > range.to.x ? 1 : 0);
    };

    if(mSlices.empty()) { return false; } //short circuit

    while(halfSize != 0)
    {
        comp = compare(left, mSlices[index]);

        if(comp == 0)
        {
            break;
        }
        else if(comp > 0)
        {
            halfSize /= 2;
            index += halfSize;
        }
        else
        {
            halfSize /= 2;
            index -= halfSize;
        }
    }

    return (comp == 0) ? (right <= mSlices[index].to.x) : false;
}

bool CuttingRow::contains(FlatPt pt)
{
    long halfSize = mSlices.size()/2;
    long index = halfSize;
    int comp;

    auto compare = [](long x, FlatPair &range) -> int
    {
        return x < range.from.x ? -1 : (x > range.to.x ? 1 : 0);
    };

    if(mSlices.empty()) { return false; } //short circuit

    while(halfSize != 0)
    {
        comp = compare(pt.x, mSlices[index]);

        if(comp == 0)
        {
            break;
        }
        else if(comp > 0)
        {
            halfSize /= 2;
            index += halfSize;
        }
        else
        {
            halfSize /= 2;
            index -= halfSize;
        }
    }

    return (comp == 0);
}
