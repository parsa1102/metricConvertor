#include "tempconvertor.h"
#include <QDebug>

tempConvertor::tempConvertor(QObject *parent, float INIT, QString fromMetric, QString toMetric)
    : QObject{parent}
{
    this->INIT = INIT;
    this->fromMetric = fromMetric;
    this->toMetric = toMetric;
}


float tempConvertor::toCelsius(float init, QString origin)
{
    qInfo()<<origin;
    if(origin == "Celsius")
        return init;
    if(origin == "Farenheit"){
        //return
        //qInfo()<<init;
        return float(float(init-32) *0.55555555555);
    }
    if(origin == "Kelvin")
        return init - 273.15;
}

float tempConvertor::fromCelsius(float init, QString dest)
{
    if(dest == "Celsius")
        return init;
    if(dest == "Farenheit")
        return init * float(1.8) + 32;
    if(dest == "Kelvin")
        return init + 273.15;
}

float tempConvertor::convert()
{
    return fromCelsius(toCelsius(INIT , fromMetric) , toMetric);
}
