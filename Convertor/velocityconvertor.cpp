#include "velocityconvertor.h"

velocityConvertor::velocityConvertor(QObject *parent, float INIT, QString fromMetric, QString toMetric)
    : QObject{parent}
{
    this->init = INIT;
    this->origin = fromMetric;
    this->dest = toMetric;
}

float velocityConvertor::toMs()
{
    if(this->origin == "km/h"){
        return init/(3.6);
    }if(this->origin == "mile/h"){
        return init/2.237;
    }if(this->origin == "m/s"){
        return init;
    }if(this->origin == "mach"){
        return init*343;
    }
    return 0;
}

float velocityConvertor::fromMs(float Ms)
{
    if(this->dest == "km/h"){
        return Ms*(3.6);
    }if(this->dest == "mile/h"){
        return Ms*2.237;
    }if(this->dest == "m/s"){
        return Ms;
    }if(this->dest == "mach"){
        return Ms/343;
    }
    return 0;
}


float velocityConvertor::convert()
{
    return fromMs(toMs());
}

