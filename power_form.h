#ifndef POWER_FORM_H
#define POWER_FORM_H

#include <QDialog>

namespace Ui {
class Power_form;
}

class Power_form : public QDialog
{
    Q_OBJECT

public:
    explicit Power_form(QWidget *parent = nullptr);
    ~Power_form();

private:
    Ui::Power_form *ui;

public slots:
    void slotPower(QString b);

signals:
    void signalFormPower(QString);

private slots:
    void on_pushButton_clicked();
};

#endif // POWER_FORM_H
