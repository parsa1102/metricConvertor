#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <tempconvertor.h>
#include <lengthconvertor.h>
#include <velocityconvertor.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_lineEdit_textEdited(const QString &arg1)
{
    tempConvertor * tmpConvert = new tempConvertor(this , arg1.toFloat() , ui->comboBox->currentText() , ui->comboBox_2->currentText());
    float ret = tmpConvert->convert();
    qInfo()<<ui->comboBox->currentText();
    ui->lineEdit_2->setText(QString::number(ret));
}


void Widget::on_lineEdit_2_textEdited(const QString &arg1)
{
    tempConvertor * tmpConvert = new tempConvertor(this , arg1.toFloat()  , ui->comboBox_2->currentText() , ui->comboBox->currentText());
    float ret = tmpConvert->convert();
    ui->lineEdit->setText(QString::number(ret));
}


void Widget::on_lineEdit_3_textEdited(const QString &arg1)
{
    lengthConvertor * convertor = new lengthConvertor(this , arg1.toFloat() , ui->comboBox_3->currentText() , ui->comboBox_4->currentText());
    float ret = convertor->convert();
    ui->lineEdit_4->setText(QString::number(ret));
}


void Widget::on_lineEdit_4_textEdited(const QString &arg1)
{
    lengthConvertor * convertor = new lengthConvertor(this , arg1.toFloat() , ui->comboBox_4->currentText() , ui->comboBox_3->currentText());
    float ret = convertor->convert();
    ui->lineEdit_3->setText(QString::number(ret));
}


void Widget::on_lineEdit_5_textEdited(const QString &arg1)
{
    velocityConvertor * convertor = new velocityConvertor(this , arg1.toFloat() , ui->comboBox_5->currentText() , ui->comboBox_6->currentText());
    float ret = convertor->convert();
    ui->lineEdit_6->setText(QString::number(ret));
}


void Widget::on_lineEdit_6_textEdited(const QString &arg1)
{
    velocityConvertor * convertor = new velocityConvertor(this , arg1.toFloat() , ui->comboBox_6->currentText() , ui->comboBox_5->currentText());
    float ret = convertor->convert();
    ui->lineEdit_5->setText(QString::number(ret));
}


void Widget::on_comboBox_activated(int index)
{
    Q_UNUSED(index);
    tempConvertor * tmpConvert = new tempConvertor(this , ui->lineEdit_2->text().toFloat()  , ui->comboBox_2->currentText() , ui->comboBox->currentText());
    float ret = tmpConvert->convert();
    ui->lineEdit->setText(QString::number(ret));
}


void Widget::on_comboBox_2_activated(int index)
{
    Q_UNUSED(index);
    tempConvertor * tmpConvert = new tempConvertor(this , ui->lineEdit->text().toFloat()  , ui->comboBox->currentText() , ui->comboBox_2->currentText());
    float ret = tmpConvert->convert();
    ui->lineEdit_2->setText(QString::number(ret));
}


void Widget::on_comboBox_3_activated(int index)
{
    Q_UNUSED(index);
    lengthConvertor * tmpConvert = new lengthConvertor(this , ui->lineEdit_4->text().toFloat()  , ui->comboBox_4->currentText() , ui->comboBox_3->currentText());
    float ret = tmpConvert->convert();
    ui->lineEdit_3->setText(QString::number(ret));
}


void Widget::on_comboBox_4_activated(int index)
{
    Q_UNUSED(index);
    lengthConvertor * tmpConvert = new lengthConvertor(this , ui->lineEdit_3->text().toFloat()  , ui->comboBox_3->currentText() , ui->comboBox_4->currentText());
    float ret = tmpConvert->convert();
    ui->lineEdit_4->setText(QString::number(ret));
}


void Widget::on_comboBox_5_activated(int index)
{
    Q_UNUSED(index);
    velocityConvertor * tmpConvert = new velocityConvertor(this , ui->lineEdit_6->text().toFloat()  , ui->comboBox_6->currentText() , ui->comboBox_5->currentText());
    float ret = tmpConvert->convert();
    ui->lineEdit_5->setText(QString::number(ret));
}


void Widget::on_comboBox_6_activated(int index)
{
    Q_UNUSED(index);
    velocityConvertor * tmpConvert = new velocityConvertor(this , ui->lineEdit_5->text().toFloat()  , ui->comboBox_5->currentText() , ui->comboBox_6->currentText());
    float ret = tmpConvert->convert();
    ui->lineEdit_6->setText(QString::number(ret));
}

