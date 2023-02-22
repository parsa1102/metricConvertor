#ifndef LENGTHCONVERTOR_H
#define LENGTHCONVERTOR_H

#include <QObject>

class lengthConvertor : public QObject
{
    Q_OBJECT
public:
    explicit lengthConvertor(QObject *parent = nullptr, float INIT = 0 , QString fromMetric = "" , QString toMetric = "");

signals:

private:
    float init;
    QString origin;
    QString dest;
    bool checkValidity();
    float toMeter();
    float fromMeter(float mtr);

public:
    float convert();

};

#endif // LENGTHCONVERTOR_H
