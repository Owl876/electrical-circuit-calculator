#include "resistor_form.h"
#include "ui_resistor_form.h"

Resistor_form::Resistor_form(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Resistor_form)
{
    ui->setupUi(this);
}

Resistor_form::~Resistor_form()
{
    delete ui;
}

void Resistor_form::slotResistor(QString a)
{
    ui->label->setText(a);
}

void Resistor_form::on_pushButton_clicked()
{
    emit signalFormResistor(ui->lineEdit->text());
}

