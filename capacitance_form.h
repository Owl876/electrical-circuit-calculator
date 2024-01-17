#ifndef CAPACITANCE_FORM_H
#define CAPACITANCE_FORM_H

#include <QDialog>

namespace Ui {
class Capacitance_form;
}

class Capacitance_form : public QDialog
{
    Q_OBJECT

public:
    explicit Capacitance_form(QWidget *parent = nullptr);
    ~Capacitance_form();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Capacitance_form *ui;

public slots:
    void slotCapacitance(QString d);

signals:
    void signalFormCapacitance(QString);


};

#endif // CAPACITANCE_FORM_H
