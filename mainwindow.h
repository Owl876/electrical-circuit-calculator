#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "resistor_form.h"
#include <ui_resistor_form.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_istochnik1_clicked();

    void on_condensator2_clicked();

    void on_istochnik2_clicked();

    void on_potrebitel1_clicked();

    void on_potrebitel2_clicked();

    void on_condensator1_clicked();

    void on_rezistor_constant_clicked();

    void on_rezistor_variable_clicked();

    void on_provodnik_clicked();

    void on_key_clicked();

    void on_shema0_calculate_clicked();

private:
    Ui::MainWindow *ui;
    Resistor_form *resistor;

signals:
    void signal(QString);

public slots:
    void slotForm(QString a);
};




#endif // MAINWINDOW_H
