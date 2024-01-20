#include "voltage_form.h"
#include "ui_voltage_form.h"

Voltage_form::Voltage_form(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Voltage_form)
{
    ui->setupUi(this);
}

Voltage_form::~Voltage_form()
{
    delete ui;
}

void Voltage_form::slotVoltage(QString c)
{
    ui->label->setText(c);
}


void Voltage_form::on_pushButton_clicked()
{
    emit signalFormVoltage(ui->lineEdit->text());
    QWidget::close();
}

