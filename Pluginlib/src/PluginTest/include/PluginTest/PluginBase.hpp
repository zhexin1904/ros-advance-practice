#ifndef __PLUGIN_BASE_H__
#define __PLUGIN_BASE_H__

namespace PluginBase
{

class BasePolygon
{

public:

    virtual void GetParam(double param) = 0;
    virtual double GetArea() = 0;

    virtual ~BasePolygon()
    {

    }
    
protected:
    BasePolygon()
    {
        
    }
    
};


}


















#endif