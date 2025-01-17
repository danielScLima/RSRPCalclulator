#ifndef IMAPDATAPROVIDER_H
#define IMAPDATAPROVIDER_H
#pragma once
#include <utility>
#include <vector>

class IMapDataProvider
{
public:
    virtual unsigned int pixelHeight(std::pair<int,int> p_pixel) = 0;
    virtual double coutDistance(std::pair<int,int> p_pixel1, std::pair<int,int> p_pixel2) = 0;
    virtual double coutMediumHeightBetwenTwoPixels(std::pair<int,int> p_pixel1, std::pair<int,int> p_pixel2, int p_interwal) = 0;
    virtual std::vector<std::pair<int,int>> getVectorOfPixels(std::pair<int,int> p_pixel1, std::pair<int,int> p_pixel2, int p_interwal) = 0;
    virtual ~IMapDataProvider(){}
};

#endif // IMAPDATAPROVIDER_H
