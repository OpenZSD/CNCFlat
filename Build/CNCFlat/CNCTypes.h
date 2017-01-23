#ifndef CNCTYPES_H
#define CNCTYPES_H

struct FlatPt
{
    long int x;
    long int y;
};

struct FlatPair
{
    FlatPt from;
    FlatPt to;
};

struct FlatPath
{
    FlatPair path;
    bool isChained;
    bool hasObstacle;
};

struct FlatFlPt
{
    float x;
    float y;
};

struct FlatFlPair
{
    FlatFlPt from;
    FlatFlPt to;
};

struct FlatFlPath
{
    FlatFlPair path;
    bool isChained;
    bool hasObstacle;
};

#endif // CNCTYPES_H
