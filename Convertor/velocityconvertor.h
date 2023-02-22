#ifndef VELOCITYCONVERTOR_H
#define VELOCITYCONVERTOR_H

#include <QObject>

class velocityConvertor : public QObject
{
    Q_OBJECT
public:
    explicit velocityConvertor(QObject *parent = nullptr , float INIT = 0 , QString fromMetric = "" , QString toMetric = "");

signals:

private:
    float init;
    QString origin;
    QString dest;
    float toMs();
    float fromMs(float Ms);

public:
    float convert();


};

#endif // VELOCITYCONVERTOR_H
