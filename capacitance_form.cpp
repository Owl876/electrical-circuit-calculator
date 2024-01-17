#include "capacitance_form.h"
#include "ui_capacitance_form.h"

Capacitance_form::Capacitance_form(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Capacitance_form)
{
    ui->setupUi(this);
}

Capacitance_form::~Capacitance_form()
{
    delete ui;
}

void Capacitance_form::on_pushButton_clicked()
{
    emit signalFormCapacitance(ui->lineEdit->text());
}

