#include "power_form.h"
#include "ui_power_form.h"

Power_form::Power_form(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Power_form)
{
    ui->setupUi(this);
}

Power_form::~Power_form()
{
    delete ui;
}

void Power_form::slotPower(QString b)
{
    ui->label->setText(b);
}



void Power_form::on_pushButton_clicked()
{
    emit signalFormPower(ui->lineEdit->text());
    QWidget::close();
}

