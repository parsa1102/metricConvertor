#ifndef TEMPCONVERTOR_H
#define TEMPCONVERTOR_H

#include <QObject>

class tempConvertor : public QObject
{
    Q_OBJECT
public:
    explicit tempConvertor(QObject *parent = nullptr , float INIT = 0 , QString fromMetric = "null" , QString toMetric = "null");

signals:

private:
    float toCelsius(float init , QString origin);
    float fromCelsius(float cls , QString dest);
    float INIT;
    QString fromMetric;
    QString toMetric;

public:
    float convert();

};

#endif // TEMPCONVERTOR_H
