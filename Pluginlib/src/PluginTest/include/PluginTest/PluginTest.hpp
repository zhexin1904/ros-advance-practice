#ifndef __PLUGIN_TEST_H__
#define __PLUGIN_TEST_H__
#include "PluginTest/PluginBase.hpp"
#include <cmath>

#define CONST_PI 3.141592654f


namespace PluginDerive
{
    class Circle : public PluginBase::BasePolygon
    {
        
    public:
        void GetParam(double Radius)
        {
            this->mRadius = Radius;
        }
        double GetArea()
        {
            return pow(mRadius, 2)*CONST_PI;
        }

    private:
        double mRadius;
    };

    class Square : public PluginBase::BasePolygon
    {
    public:

        void GetParam(double Length)
        {
            this->mLength = Length;
        }
        double GetArea()
        {
            return pow(mLength, 2);
        }
        
    private:
        double mLength;
        
    };

}

#endif