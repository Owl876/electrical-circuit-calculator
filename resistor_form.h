#ifndef RESISTOR_FORM_H
#define RESISTOR_FORM_H

#include <QDialog>

namespace Ui {
class Resistor_form;
}

class Resistor_form : public QDialog
{
    Q_OBJECT

public:
    explicit Resistor_form(QWidget *parent = nullptr);
    ~Resistor_form();

private:
    Ui::Resistor_form *ui;

public slots:
    void slot(QString a);

signals:
    void signalForm(QString);

private slots:
    void on_pushButton_clicked();
    void on_buttonBox_accepted();
};

#endif // RESISTOR_FORM_H
