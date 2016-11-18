#include "MapDataProvider.h"
#include <math.h>

namespace
{
    template< typename T1, typename T2>
    auto operator-(std::pair<T1, T2> p_pixel1,
                   std::pair<T1, T2> p_pixel2)
    {
        return std::pair<T1, T2>(
                    p_pixel1.first - p_pixel2.first,
                    p_pixel1.second - p_pixel2.second);
    }
    template< typename T1, typename T2>
    auto operator+(std::pair<T1, T2> p_pixel1,
                   std::pair<T1, T2> p_pixel2)
    {
        return std::pair<T1, T2>(
                    p_pixel1.first + p_pixel2.first,
                    p_pixel1.second + p_pixel2.second);
    }
    auto operator/(std::pair<int, int> p_pixel1,
                   float p_divider)
    {
        return std::pair<float, float>(
                    p_pixel1.first / p_divider,
                    p_pixel1.second / p_divider);
    }
}

MapDataProvider::MapDataProvider():
    m_mapParser(std::make_unique<MapParser>()){}

unsigned int MapDataProvider::pixelHeight(std::pair<int, int> p_pixel)
{
    return m_mapParser->getPixelHight(p_pixel);
}

float MapDataProvider::coutDistance(std::pair<int, int> p_pixel1,
                                    std::pair<int, int> p_pixel2)
{
    return pow((pow(p_pixel1.first-p_pixel2.first, 2)+pow(p_pixel1.second-p_pixel2.second,2)),0.5)*25;
}

float MapDataProvider::coutMediumHeightBetwenTwoPixels(std::pair<int, int> p_pixel1,
                                                       std::pair<int, int> p_pixel2,
                                                       int p_interwal)
{
    int l_jumps = coutDistance(p_pixel1, p_pixel2) / p_interwal;

    if(l_jumps<1)
    {
        return (pixelHeight(p_pixel1)+pixelHeight(p_pixel2)) / 2;
    }

    auto l_jumper = (p_pixel2 - p_pixel1) / l_jumps;

    std::pair<float, float> l_last = p_pixel1;
    float l_sumaryHeight = 0;
    for(int i = 0; i < l_jumps; i++)
    {
        l_sumaryHeight += pixelHeight(l_last);
        l_last = l_last + l_jumper;
    }

    return (l_sumaryHeight + pixelHeight(p_pixel2)) / (l_jumps + 1);
}