#include "lengthconvertor.h"

lengthConvertor::lengthConvertor(QObject *parent , float INIT , QString fromMetric , QString toMetric)
    : QObject{parent}
{
    this->init = INIT;
    this->origin = fromMetric;
    this->dest = toMetric;
}

float lengthConvertor::toMeter()
{
    if(this->origin == "Meter"){
        return init;
    }
    if(this->origin == "cm"){
        return float(init/100);
    }
    if(this->origin == "mm"){
        return float(init/1000);
    }
    if(this->origin == "dm"){
        return float(init/10);
    }
    if(this->origin == "km"){
        return init*1000;
    }
    if(this->origin == "mile"){
       return 1609.34*init;
    }
    if(this->origin == "inch"){
        return 0.0254*init;
    }
    if(this->origin == "foot"){
        return 0.3048*init;
    }
    return 0;
}

float lengthConvertor::fromMeter(float mtr)
{
    if(this->dest == "Meter"){
        return mtr;
    }
    if(this->dest == "cm"){
        return float(mtr*100);
    }
    if(this->dest == "mm"){
        return float(mtr*1000);
    }
    if(this->dest == "dm"){
        return float(mtr*10);
    }
    if(this->dest == "km"){
        return mtr/1000;
    }
    if(this->dest == "mile"){
       return mtr/1609.34;
    }
    if(this->dest == "inch"){
        return mtr/0.0254;
    }
    if(this->dest == "foot"){
        return mtr/0.3048;
    }
    return 0;
}

float lengthConvertor::convert()
{
    return fromMeter(this->toMeter());
}

