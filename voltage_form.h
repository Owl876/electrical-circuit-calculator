#ifndef VOLTAGE_FORM_H
#define VOLTAGE_FORM_H

#include <QDialog>

namespace Ui {
class Voltage_form;
}

class Voltage_form : public QDialog
{
    Q_OBJECT

public:
    explicit Voltage_form(QWidget *parent = nullptr);
    ~Voltage_form();

private:
    Ui::Voltage_form *ui;

public slots:
    void slotVoltage(QString c);

signals:
    void signalFormVoltage(QString);

private slots:
    void on_pushButton_clicked();
};

#endif // VOLTAGE_FORM_H
