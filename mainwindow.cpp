#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QPixmap"
#include "QSignalMapper"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resistor = new Resistor_form;


    connect(this, &MainWindow::signal, resistor, &Resistor_form::slot);
    connect(resistor, &Resistor_form::signalForm, this, &MainWindow::slotForm);

}

// Глобальные переменные
// Список ячеек
int cell1 = 0, cell2 = 0, cell3=0, cell4=0, cell5=0, cell6=0;
// Значения токов
double voltage = 0;



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_istochnik1_clicked()
{
    resistor->show();
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=1;

    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=1;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=1;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=1;
    }
    qDebug() << "Cell1: " << cell1;
    qDebug() << "Cell2: " << cell2;
    qDebug() << "Cell3: " << cell3;
    qDebug() << "Cell4: " << cell4;
}

void MainWindow::on_istochnik2_clicked()
{
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=2;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=2;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=2;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=2;
    }
    qDebug() << "Cell1: " << cell1;
    qDebug() << "Cell2: " << cell2;
    qDebug() << "Cell3: " << cell3;
    qDebug() << "Cell4: " << cell4;
}

void MainWindow::on_potrebitel1_clicked()
{
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=3;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=3;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=3;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=3;
    }
}

void MainWindow::on_potrebitel2_clicked()
{
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=4;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=4;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=4;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=4;
    }
}

void MainWindow::on_condensator1_clicked()
{
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=5;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=5;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=5;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=5;
    }
}

void MainWindow::on_condensator2_clicked()
{
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=6;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=6;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=6;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=6;
    }
}

void MainWindow::on_rezistor_constant_clicked()
{
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        ui->label->setText("Сопротивление резистора");
        cell1=7;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        ui->label->setText("Сопротивление резистора");
        cell2=7;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        ui->label->setText("Сопротивление резистора");
        cell3=7;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        ui->label->setText("Сопротивление резистора");
        cell4=7;
    }

}

void MainWindow::on_rezistor_variable_clicked()
{
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/rezistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=8;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/rezistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=8;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/rezistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=8;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/rezistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=8;
    }
}

void MainWindow::on_provodnik_clicked()
{
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=9;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=9;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=9;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=9;
    }
}

void MainWindow::on_key_clicked()
{
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=10;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=10;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=10;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=10;
    }
}




void MainWindow::on_shema0_calculate_clicked()
{
    //QTabWidget tabWidget;
    //int currentIndex = tabWidget.currentIndex();
    //if(currentIndex==1){
    //    QIcon ico;
    //    ico.addPixmap(QPixmap(":/img/kluch.png"),QIcon::Normal,QIcon::On);
    //    ui->shema0_calculate->setIcon(ico);
    //}
    //qDebug() << "Index of current selected tab: " << currentIndex;

    emit signal(ui->lineEdit->text());

    emit signal(ui12->lineEdit->text());
}

void MainWindow::slotForm(QString a)
{
    ui->label->setText(a);
    voltage = a.toDouble();
    qDebug() << "voltage: " << voltage;
}


