#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QPixmap"
#include "QSignalMapper"
#include <QtWidgets>
#include <QElapsedTimer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    resistor = new Resistor_form;
    powerfull = new Power_form;
    capacitive = new Capacitance_form;
    voltmeter = new Voltage_form;

    connect(this, &MainWindow::signalResistor, resistor, &Resistor_form::slotResistor);
    connect(resistor, &Resistor_form::signalFormResistor, this, &MainWindow::slotFormResistor);
    connect(powerfull, &Power_form::signalFormPower, this, &MainWindow::slotFormPower);
    connect(voltmeter, &Voltage_form::signalFormVoltage, this, &MainWindow::slotFormVoltage);
    connect(capacitive, &Capacitance_form::signalFormCapacitance, this, &MainWindow::slotFormCapacitance);



}

// Глобальные переменные
// Список ячеек
int cell1 = 0, cell2 = 0, cell3=0, cell4=0, cell5=0, cell6=0, cell7=0;
// Значения токов
// напряжение, мощность, сопротивление, емкость
double voltage[8], power[8], resistance[8], capacitance[8];



MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_istochnik1_clicked()
{
    voltmeter->show();
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=1;

    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=1;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=1;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=1;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=1;

    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=1;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=1;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=1;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=1;

    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=1;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=1;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=1;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=1;
    }

    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=1;

    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=1;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=1;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=1;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=1;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell6=1;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=1;

    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=1;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=1;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=1;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=1;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell6=1;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=1;
    }


    qDebug() << "Cell1: " << cell1;
    qDebug() << "Cell2: " << cell2;
    qDebug() << "Cell3: " << cell3;
    qDebug() << "Cell4: " << cell4;
}

void MainWindow::on_istochnik2_clicked()
{
    voltmeter->show();
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=2;
    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=2;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=2;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=2;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=2;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=2;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=2;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=2;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=2;
    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=2;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=2;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=2;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=2;
    }

    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=2;
    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=2;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=2;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=2;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=2;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell6=2;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=2;
    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=2;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=2;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=2;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=2;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell6=2;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/istochnik2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=2;
    }



    qDebug() << "Cell1: " << cell1;
    qDebug() << "Cell2: " << cell2;
    qDebug() << "Cell3: " << cell3;
    qDebug() << "Cell4: " << cell4;
}

void MainWindow::on_potrebitel1_clicked()
{
    powerfull->show();
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=3;
    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=3;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=3;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=3;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=3;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=3;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=3;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=3;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=3;
    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=3;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=3;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=3;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=3;
    }

    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=3;
    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=3;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=3;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=3;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=3;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell6=3;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=3;
    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=3;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=3;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=3;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=3;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell6=3;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/lamp.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=3;
    }
}

void MainWindow::on_potrebitel2_clicked()
{
    powerfull->show();
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=4;
    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=4;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=4;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=4;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=4;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=4;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=4;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=4;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=4;
    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=4;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=4;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=4;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=4;
    }

    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=4;
    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=4;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=4;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=4;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=4;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell6=4;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=4;
    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=4;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=4;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=4;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=4;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell6=4;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/svetodiod.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=4;
    }
}

void MainWindow::on_condensator1_clicked()
{
    capacitive->show();
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=5;
    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=5;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=5;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=5;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=5;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=5;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=5;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=5;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=5;
    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=5;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=5;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=5;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=5;
    }
    \
    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=5;
    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=5;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=5;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=5;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=5;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell6=5;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=5;
    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=5;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=5;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=5;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=5;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell6=5;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/postoiannii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=5;
    }

}

void MainWindow::on_condensator2_clicked()
{
    capacitive->show();
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=6;
    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=6;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=6;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=6;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=6;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=6;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=6;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=6;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=6;
    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=6;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=6;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=6;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=6;
    }

    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=6;
    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=6;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=6;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=6;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=6;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell6=6;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=6;
    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=6;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=6;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=6;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=6;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell6=6;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/poliarizovanii kondensator.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=6;
    }
}

void MainWindow::on_rezistor_constant_clicked()
{
    resistor->show();
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=7;
    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=7;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=7;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=7;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=7;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=7;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=7;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=7;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=7;
    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=7;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=7;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=7;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=7;
    }

    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=7;
    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=7;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=7;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=7;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=7;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell5=7;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=7;
    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=7;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=7;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=7;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=7;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell5=7;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/rezistor1.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=7;
    }

}

void MainWindow::on_rezistor_variable_clicked()
{
    resistor->show();
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=8;
    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=8;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=8;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=8;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=8;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=8;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=8;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=8;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=8;
    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=8;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=8;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=8;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=8;
    }

    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=8;
    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=8;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=8;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=8;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=8;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell6=8;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=8;
    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=8;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=8;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=8;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=8;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell6=8;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/Resistor2.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=8;
    }
}

void MainWindow::on_provodnik_clicked()
{
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=9;
    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=9;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=9;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=9;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=9;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=9;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=9;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=9;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=9;
    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=9;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=9;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=9;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=9;
    }

    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=9;
    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=9;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=9;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=9;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=9;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell6=9;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=9;
    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=9;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=9;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=9;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=9;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell6=9;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/provodnik.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=9;
    }
}

void MainWindow::on_key_clicked()
{
    //Схема 1 (shema0)
    if(ui->shema0_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button1_1->setIcon(ico);
        cell1=10;
    }
    if(ui->shema0_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button2_1->setIcon(ico);
        cell2=10;
    }
    if(ui->shema0_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button3_1->setIcon(ico);
        cell3=10;
    }
    if(ui->shema0_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema0_button4_1->setIcon(ico);
        cell4=10;
    }

    //Схема 2 (shema1)
    if(ui->shema1_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button1_1->setIcon(ico);
        cell1=10;
    }
    if(ui->shema1_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button2_1->setIcon(ico);
        cell2=10;
    }
    if(ui->shema1_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button3_1->setIcon(ico);
        cell3=10;
    }
    if(ui->shema1_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema1_button4_1->setIcon(ico);
        cell4=10;
    }

    //Схема 3 (shema2)
    if(ui->shema2_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button1_1->setIcon(ico);
        cell1=10;
    }
    if(ui->shema2_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button2_1->setIcon(ico);
        cell2=10;
    }
    if(ui->shema2_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button3_1->setIcon(ico);
        cell3=10;
    }
    if(ui->shema2_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button4_1->setIcon(ico);
        cell4=10;
    }
    if(ui->shema2_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema2_button5_1->setIcon(ico);
        cell5=10;
    }

    //Схема 4 (shema3)
    if(ui->shema3_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button1_1->setIcon(ico);
        cell1=10;
    }
    if(ui->shema3_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button2_1->setIcon(ico);
        cell2=10;
    }
    if(ui->shema3_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button3_1->setIcon(ico);
        cell3=10;
    }
    if(ui->shema3_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button4_1->setIcon(ico);
        cell4=10;
    }
    if(ui->shema3_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button5_1->setIcon(ico);
        cell5=10;
    }
    if(ui->shema3_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema3_button6_1->setIcon(ico);
        cell6=10;
    }

    //Схема 5 (shema4)
    if(ui->shema4_button1->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button1_1->setIcon(ico);
        cell1=10;
    }
    if(ui->shema4_button2->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button2_1->setIcon(ico);
        cell2=10;
    }
    if(ui->shema4_button3->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button3_1->setIcon(ico);
        cell3=10;
    }
    if(ui->shema4_button4->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/RotatedElements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button4_1->setIcon(ico);
        cell4=10;
    }
    if(ui->shema4_button5->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button5_1->setIcon(ico);
        cell5=10;
    }
    if(ui->shema4_button6->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button6_1->setIcon(ico);
        cell6=10;
    }
    if(ui->shema4_button7->isChecked())
    {
        QIcon ico;
        ico.addPixmap(QPixmap(":/img/elements/kluch.png"),QIcon::Normal,QIcon::On);
        ui->shema4_button7_1->setIcon(ico);
        cell7=10;
    }

}


// Это кнопки "Расчитать". В них делай основые вычисления по каждой схеме
void MainWindow::on_shema0_calculate_clicked()
{
    // Таймер для времени работы функции
    QElapsedTimer timer;
    timer.start();

    if ((cell1 != 1) and (cell1 !=2) and (cell2 != 1) and (cell2 !=2) and (cell3 != 1) and (cell3 !=2) and (cell4 != 1) and (cell4 !=2)) {
        ui->label->setText("Источник отсутствует");
    } else if ((cell1 == 10) or (cell2 == 10) or  (cell3 == 10) or  (cell4 == 10) or (cell1 == 5) or (cell2 == 5) or  (cell3 == 5) or  (cell4 == 5) or (cell1 == 6) or (cell2 == 6) or  (cell3 == 6) or  (cell4 == 6)) {
        ui->label->setText("Цепь не замкнута");
    } else {
        double allvoltage = 0, allresistance = 0;

        QString circuitText = "I1 * (";
        QString powerText = "";
        //int countRez = 1;
        int countPow = 0;

        // Это стандартный метод вывода на экран (текст появится в правом верхем углу)
        if (cell1 == 1 or cell1 == 2) {
            allvoltage += voltage[1];
            powerText += " E1 +";
        } else if (cell1 == 7 or cell1 == 8) {
            allresistance += resistance[1];
            //circuitText = circuitText + " R" + QString::number(countRez) + " +";
            circuitText += " R1 +";
            //countRez += 1;
        }
        if (cell2 == 1 or cell2 == 2) {
            allvoltage += voltage[2];
            powerText += " E2 +";
        } else if (cell2 == 7 or cell2 == 8) {
            allresistance += resistance[2];
            circuitText += " R2 +";
            //countRez += 1;
        }
        if (cell3 == 1 or cell3 == 2) {
            allvoltage += voltage[3];
            powerText += " E3 +";
        } else if (cell3 == 7 or cell3 == 8) {
            allresistance += resistance[3];
            circuitText += " R3 +";
            //countRez += 1;
        }
        if (cell4 == 1 or cell4 == 2) {
            allvoltage += voltage[4];
            powerText += " E4 +";
        } else if (cell4 == 7 or cell4 == 8) {
            allresistance += resistance[4];
            circuitText += " R4 +";
            //countRez += 1;
        }
        //вот тут мб надо еще для лампочек добавить R1234...
        if (cell1 == 3 or cell1 == 4) {
            allresistance = allresistance + (allvoltage*allvoltage/power[1]);
        }
        if (cell2 == 3 or cell2 == 4) {
            allresistance = allresistance + (allvoltage*allvoltage/power[2]);
        }
        if (cell3 == 3 or cell3 == 4) {
            allresistance = allresistance + (allvoltage*allvoltage/power[3]);
        }
        if (cell4 == 3 or cell4 == 4) {
            allresistance = allresistance + (allvoltage*allvoltage/power[4]);
        }

        QString amperage = QString::number (allvoltage/allresistance);
        if (allresistance == 0) {
            amperage = "Короткое замыкание!!";
            ui->label->setText( amperage);
        } else {
            ui->label->setText("Сила тока в цепи = " + amperage + "А");
        }
        QString voltageText = "";

        if (cell1 == 3 or cell1 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[1]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[1])) + '\n';
        }
        if (cell2 == 3 or cell2 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[2]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[2])) + '\n';
        }
        if (cell3 == 3 or cell3 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[3]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[3])) + '\n';
        }
        if (cell4 == 3 or cell4 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[4]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[4])) + '\n';
        }

        ui->label_13->setText(voltageText);
        if (circuitText != "I1 * ("){
            circuitText.chop(2);
            circuitText += " ) ";
        } else {
            circuitText.chop(3);
            circuitText += "* 0 ";
        }
        powerText.chop(2);


        QString combinedText = circuitText + "= " + powerText;
        ui->label_2->setText(combinedText);

    }
    //ui->label->setText("Хелоу");
    qint64 elapsedTime = timer.nsecsElapsed();
    double elapsedSeconds = elapsedTime / 1.0e9;
    qDebug() << "Время работы функции: " << elapsedTime << " нс (" << elapsedSeconds << " секунд)";

}

void MainWindow::on_shema1_calculate_clicked()
{
    QElapsedTimer timer;
    timer.start();

    if ((cell1 != 1) and (cell1 !=2) and (cell2 != 1) and (cell2 !=2) and (cell3 != 1) and (cell3 !=2) and (cell4 != 1) and (cell4 !=2)) {
        ui->label->setText("Источник отсутствует");
    } else if ((cell1 == 10) or  (cell4 == 10) or (cell1 == 5) or  (cell4 == 5) or (cell1 == 6) or  (cell4 == 6) or ((cell2 == 10 or cell2==5 or cell2==6) and (cell3 == 10 or cell3==5 or cell3==6))) {
        ui->label->setText("Цепь не замкнута");
    } else {
        double allvoltage = 0, allresistance = 0;

        QString circuitI1Text = "I1 * (";
        QString circuitI2Text = "I2 * (";
        QString powerI1Text = "";
        QString powerI2Text = "";
        QString conflictI1Text = "";
        QString conflictI2Text = "";

        if (cell1 == 1 or cell1 == 2) {
            allvoltage += voltage[1];
            powerI1Text += " E1 +";
        } else if (cell1 == 7 or cell1 == 8){
            allresistance += resistance[1];
            //circuitI1Text = circuitI1Text + " R" + QString::number(count) + " +";
            circuitI1Text += " R1 +";
            //count += 1;
        }
        if (cell4 == 1 or cell4 ==2 ){
            allvoltage += voltage[4];
            powerI1Text += " E4 +";
        }else if (cell4 == 7 or cell4 == 8){
            allresistance += resistance[4];
            circuitI1Text += " R4 +";
        }
        if (cell2 == 1 or cell2 == 2) {
            allvoltage += voltage[2];
            powerI2Text += " E2 +";
            powerI1Text.chop(2);
            powerI1Text += " - E2 +";
        }else if (cell2 == 7 or cell2 == 8){
            circuitI2Text += " R2 +";
            circuitI1Text += " R2 +";
            conflictI1Text += " - I2 * R2";
            conflictI2Text += " - I1 * R2";
        }
        if (cell3 == 1 or cell3 == 2) {
            allvoltage += voltage[3];
            powerI2Text += " E3 +";
        }else if (cell3 == 7 or cell3 == 8){
            circuitI2Text += " R3 +";
        }
        if (cell2 == 3 or cell2 == 4) {
            resistance[2] = (allvoltage*allvoltage/power[2]);
        }
        if (cell3 == 3 or cell3 == 4) {
            resistance[3] = (allvoltage*allvoltage/power[3]);
        }


        if (resistance[2]*resistance[3] !=0 ) {
            allresistance += (resistance[2]*resistance[3])/(resistance[2]+resistance[3]);
        }

        //lamps
        if (cell1 == 3 or cell1 ==4) {
            allresistance += allvoltage*allvoltage/power[1];
        }
        if (cell4 == 3 or cell4 ==4) {
            allresistance += allvoltage*allvoltage/power[4];
        }

        QString amperage = QString::number (allvoltage/allresistance);
        if (allresistance == 0) {
            amperage = "Короткое замыкание!!";
            ui->label->setText( amperage);
        } else {
            ui->label->setText("Сила тока в цепи = " + amperage + "А");
        }
        QString voltageText = "";

        if (cell1 == 3 or cell1 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[1]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[1])) + '\n';
        }
        if (cell2 == 3 or cell2 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[2]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[2])) + '\n';
        }
        if (cell3 == 3 or cell3 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[3]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[3])) + '\n';
        }
        if (cell4 == 3 or cell4 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[4]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[4])) + '\n';
        }

        ui->label_13->setText(voltageText);

        if (circuitI1Text != "I1 * ("){
            circuitI1Text.chop(2);
            circuitI1Text += " ) ";
        } else {
            circuitI1Text.chop(3);
            circuitI1Text += "* 0 ";
        }

        if (circuitI2Text != "I2 * ("){
            circuitI2Text.chop(2);
            circuitI2Text += " ) ";
        } else {
            circuitI2Text.chop(3);
            circuitI2Text += "* 0 ";
        }

        if (powerI1Text != ""){
            powerI1Text.chop(2);
        } else {
            powerI1Text = "0";
        }

        if (powerI2Text != ""){
            powerI2Text.chop(2);
        } else {
            powerI2Text = "0";
        }

        QString combinedText = circuitI1Text + conflictI1Text + "= " + powerI1Text + "\n" + circuitI2Text + conflictI2Text + "= " + powerI2Text;
        ui->label_2->setText(combinedText);
    }

    qint64 elapsedTime = timer.nsecsElapsed();
    double elapsedSeconds = elapsedTime / 1.0e9;
    qDebug() << "Время работы функции: " << elapsedTime << " нс (" << elapsedSeconds << " секунд)";
}

void MainWindow::on_shema2_calculate_clicked()
{
    QElapsedTimer timer;
    timer.start();

    if ((cell1 != 1) and (cell1 !=2) and (cell2 != 1) and (cell2 !=2) and (cell3 != 1) and (cell3 !=2) and (cell4 != 1) and (cell4 !=2) and (cell5 != 1) and (cell5!=2)) {
        ui->label->setText("Источник отсутствует");
    } else if ((cell1 == 10) or  (cell4 == 10) or (cell1 == 5) or  (cell4 == 5) or (cell1 == 6) or  (cell4 == 6) or (cell2 == 10) or (cell2 == 5) or (cell2==6) or ((cell3 == 10 or cell3==5 or cell3==6) and (cell5 == 10 or cell5==5 or cell5==6))) {
        ui->label->setText("Цепь не замкнута");
    } else {
        double allvoltage = 0, allresistance = 0;

        QString circuitI1Text = "I1 * (";
        QString circuitI2Text = "I2 * (";
        QString powerI1Text = "";
        QString powerI2Text = "";
        QString conflictI1Text = "";
        QString conflictI2Text = "";

        if (cell1 == 1 or cell1 == 2) {
            allvoltage += voltage[1];
            powerI1Text += " E1 +";
        } else if (cell1 == 7 or cell1 == 8){
            allresistance += resistance[1];
            circuitI1Text += " R1 +";
        }
        if (cell2 == 1 or cell2 ==2 ){
            allvoltage += voltage[2];
            powerI1Text += " E2 +";
        }else if (cell2 == 7 or cell2 == 8){
            allresistance += resistance[2];
            circuitI1Text += " R2 +";
        }
        if (cell4 == 1 or cell4 ==2 ){
            allvoltage += voltage[4];
            powerI1Text += " E4 +";
        }else if (cell4 == 7 or cell4 == 8){
            allresistance += resistance[4];
            circuitI1Text += " R4 +";
        }

        if (cell5 == 1 or cell5 == 2) {
            allvoltage += voltage[5];
            powerI2Text += " E5 +";
        }else if (cell5 == 7 or cell5 == 8){
            circuitI2Text += " R5 +";
        }
        if (cell3 == 1 or cell3 == 2) {
            allvoltage += voltage[3];
            powerI2Text += " E3 +";
            powerI1Text.chop(2);
            powerI1Text += " - E3 +";
        }else if (cell3 == 7 or cell3 == 8){
            circuitI2Text += " R3 +";
            circuitI1Text += " R3 +";
            conflictI1Text += " - I2 * R3";
            conflictI2Text += " - I1 * R3";
        }

        if (cell5 == 3 or cell5 == 4) {
            resistance[5] = (allvoltage*allvoltage/power[5]);
        }
        if (cell3 == 3 or cell3 == 4) {
            resistance[3] = (allvoltage*allvoltage/power[3]);
        }

        if (resistance[5]*resistance[3] !=0 ) {
            allresistance += (resistance[5]*resistance[3])/(resistance[5]+resistance[3]);
        }

        if (cell1 == 3 or cell1 ==4) {
            allresistance += allvoltage*allvoltage/power[1];
        }
        if (cell4 == 3 or cell4 ==4) {
            allresistance += allvoltage*allvoltage/power[4];
        }
        if (cell2 == 3 or cell2 ==4) {
            allresistance += allvoltage*allvoltage/power[2];
        }

        QString amperage = QString::number (allvoltage/allresistance);
        if (allresistance == 0) {
            amperage = "Короткое замыкание!!";
            ui->label->setText( amperage);
        } else {
            ui->label->setText("Сила тока в цепи = " + amperage + "А");
        }
        QString voltageText = "";

        if (cell1 == 3 or cell1 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[1]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[1])) + '\n';
        }
        if (cell2 == 3 or cell2 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[2]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[2])) + '\n';
        }
        if (cell3 == 3 or cell3 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[3]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[3])) + '\n';
        }
        if (cell4 == 3 or cell4 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[4]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[4])) + '\n';
        }
        if (cell5 == 3 or cell5 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[5]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[5])) + '\n';
        }

        ui->label_13->setText(voltageText);

        if (circuitI1Text != "I1 * ("){
            circuitI1Text.chop(2);
            circuitI1Text += " ) ";
        } else {
            circuitI1Text.chop(3);
            circuitI1Text += "* 0 ";
        }

        if (circuitI2Text != "I2 * ("){
            circuitI2Text.chop(2);
            circuitI2Text += " ) ";
        } else {
            circuitI2Text.chop(3);
            circuitI2Text += "* 0 ";
        }

        if (powerI1Text != ""){
            powerI1Text.chop(2);
        } else {
            powerI1Text = "0";
        }

        if (powerI2Text != ""){
            powerI2Text.chop(2);
        } else {
            powerI2Text = "0";
        }

        QString combinedText = circuitI1Text + conflictI1Text + "= " + powerI1Text + "\n" + circuitI2Text + conflictI2Text + "= " + powerI2Text;
        ui->label_2->setText(combinedText);
    }

    qint64 elapsedTime = timer.nsecsElapsed();
    double elapsedSeconds = elapsedTime / 1.0e9;
    qDebug() << "Время работы функции: " << elapsedTime << " нс (" << elapsedSeconds << " секунд)";
}

void MainWindow::on_shema3_calculate_clicked()
{
    QElapsedTimer timer;
    timer.start();

    if ((cell1 != 1) and (cell1 !=2) and (cell2 != 1) and (cell2 !=2) and (cell3 != 1) and (cell3 !=2) and (cell4 != 1) and (cell4 !=2) and (cell5 != 1) and (cell5!=2) and (cell6!= 1) and (cell6!=2)) {
        ui->label->setText("Источник отсутствует");
    } else if ((cell2 == 10) or (cell2 == 5) or (cell2==6) or (cell4 == 10) or (cell4 == 5) or (cell4==6) or ((cell6 == 10 or cell6==5 or cell6==6) and (cell5 == 10 or cell5==5 or cell5==6)) or ((cell1 == 10 or cell1==5 or cell1==6) and (cell3 == 10 or cell3==5 or cell3==6))) {
        ui->label->setText("Цепь не замкнута");
    } else {
        //1 контур
        QString outright1 = " = ";
        QString outleft1 = "I1 * ";
        //2 контур
        QString outright2 = " = ";
        QString outleft2 = "I2 * ( ";
        //3 контур
        QString outright3 = " = ";
        QString outleft3 = "I3 * ";


        double allvoltage = 0, allresistance = 0;

        if (cell1 == 1 or cell1 == 2) {
            allvoltage += voltage[1];
            outright1 += "E1";
        }
        if (cell4 == 1 or cell4 ==2 ){
            allvoltage += voltage[4];
            outright2 += "E4";
        }else if (cell4 == 7 or cell4 == 8){
            allresistance += resistance[4];
        }
        if (cell5 == 1 or cell5 == 2) {
            allvoltage += voltage[5];
            outright2 += " - E5";
            outright3 += "E5";
        }
        if (cell3 == 1 or cell3 == 2) {
            allvoltage += voltage[3];
            outright1 += " - E3";
            outright2 += " + E3";
        }
        if (cell6 == 1 or cell6 == 2) {
            allvoltage += voltage[6];
            outright3 += " - E6";
        }
        if (cell2 == 1 or cell2 ==2 ){
            allvoltage += voltage[2];
            outright2 += " - E2";
        }else if (cell2 == 7 or cell2 == 8){
            allresistance += resistance[2];
        }
        if (outright1 == " = ") {
            outright1 += "0";
        }
        if (outright3 == " = ") {
            outright3 += "0";
        }
        if (outright2 == " = ") {
            outright2 += "0";
        }
        if (cell1 == 3 or cell1 == 4) {
            resistance[1] = (allvoltage*allvoltage/power[1]);
        }
        if (cell3 == 3 or cell3 == 4) {
            resistance[3] = (allvoltage*allvoltage/power[3]);
        }

        if (resistance[1]*resistance[3] !=0 ) {
            allresistance += (resistance[1]*resistance[3])/(resistance[1]+resistance[3]);
        }

        if (cell5 == 3 or cell5 == 4) {
            resistance[5] = (allvoltage*allvoltage/power[5]);
        }
        if (cell6 == 3 or cell6 == 4) {
            resistance[6] = (allvoltage*allvoltage/power[6]);
        }

        if (resistance[5]*resistance[6] !=0 ) {
            allresistance += (resistance[5]*resistance[6])/(resistance[5]+resistance[6]);
        }

        if ((cell1 == 7 or cell1 ==8) and (cell3 == 7 or cell3 == 8)) {
            outleft1 += "(R1 + R3) - I2 * R3";
        } else if (cell1 == 7 or cell1 ==8) {
            outleft1 += "R1";
        }else if (cell3 == 7 or cell3 ==8) {
            outleft1 += "R3 - I2 * R3";
        }
        if (outleft1 == "I1 * ") {
            outleft1 += " * 0";
        }
        if (cell2 == 7 or cell2 ==8) {
            outleft2 += "R2 +";
        }
        if (cell3 == 7 or cell3 ==8) {
            outleft2 += " R3 + ";
            outright2.push_front(" - I1 * R3");
        }
        if (cell4 == 7 or cell4 ==8) {
            outleft2 += " R4 + ";
        }
        if (cell5 == 7 or cell5 ==8) {
            outleft2 += "R5 + ";
            outright2.push_front(" - I3 * R5");
        }
        if (outleft2 == "I2 * (") {
            outleft2 += " * 0";
        } else {
            outleft2.chop(2);
            outleft2 += ")";
        }
        if ((cell5 == 7 or cell5 ==8) and (cell6 == 7 or cell6 == 8)) {
            outleft3 += "(R5 + R6) - I2 * R5";
        } else if (cell5 == 7 or cell5 ==8) {
            outleft3 += "R5 - I2 * R5";
        } else if (cell6 == 7 or cell6 ==8) {
            outleft3 += "R6";
        }
        if (outleft3 == "I3 * ") {
            outleft3 += " * 0";
        }


        if (cell4 == 3 or cell4 ==4) {
            allresistance += allvoltage*allvoltage/power[4];
        }
        if (cell2 == 3 or cell2 ==4) {
            allresistance += allvoltage*allvoltage/power[2];
        }

        QString amperage = QString::number (allvoltage/allresistance);
        QString allout1 = outleft1 + outright1;
        QString allout2 = outleft2 + outright2;
        QString allout3 = outleft3 + outright3;
        if (allresistance == 0) {
            amperage = "Короткое замыкание!!";
            ui->label->setText( amperage);
        } else {
            ui->label_2->setText(allout1 + '\n' + allout2 + '\n' + allout3 + '\n');

            ui->label->setText("Сила тока в цепи = " + amperage + "А");
        }
        QString voltageText = "";

        if (cell1 == 3 or cell1 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[1]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[1])) + '\n';
        }
        if (cell2 == 3 or cell2 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[2]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[2])) + '\n';
        }
        if (cell3 == 3 or cell3 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[3]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[3])) + '\n';
        }
        if (cell4 == 3 or cell4 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[4]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[4])) + '\n';
        }
        if (cell5 == 3 or cell5 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[5]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[5])) + '\n';
        }
        if (cell6 == 3 or cell6 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[6]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[6])) + '\n';
        }

        ui->label_13->setText(voltageText);
    }

    qint64 elapsedTime = timer.nsecsElapsed();
    double elapsedSeconds = elapsedTime / 1.0e9;
    qDebug() << "Время работы функции: " << elapsedTime << " нс (" << elapsedSeconds << " секунд)";
}

void MainWindow::on_shema4_calculate_clicked()
{
    QElapsedTimer timer;
    timer.start();

    if ((cell1 != 1) and (cell1 !=2) and (cell2 != 1) and (cell2 !=2) and (cell3 != 1) and (cell3 !=2) and (cell4 != 1) and (cell4 !=2) and (cell5 != 1) and (cell5!=2) and (cell6!= 1) and (cell6!=2) and (cell7!= 1) and (cell7!=2)) {
        ui->label->setText("Источник отсутствует");
    } else if ((cell2 == 10) or (cell2 == 5) or (cell2==6) or (cell4 == 10) or (cell4 == 5) or (cell4==6) or (cell1 == 10) or (cell1 == 5) or (cell1==6) or ((cell3 == 10 or cell3==5 or cell3==6) and (cell5 == 10 or cell5==5 or cell5==6)) or ((cell6 == 10 or cell6==5 or cell6==6) and (cell7 == 10 or cell7==5 or cell7==6))) {
        ui->label->setText("Цепь не замкнута");
    } else {
        //1 контур
        QString outright1 = " = ";
        QString outleft1 = "I1 * (";


        //2 контур
        QString outright2 = " = ";
        QString outleft2 = "I2 * ";


        //3 контур
        QString outright3 = " = ";
        QString outleft3 = "I3 * ";


        double allvoltage = 0, allresistance = 0;
        if (cell1 == 1 or cell1 == 2) {
            allvoltage += voltage[1];
            outright1 += "E1";
        } else if (cell1 == 7 or cell1 == 8){
            allresistance += resistance[1];
        }
        if (cell2 == 1 or cell2 ==2 ){
            allvoltage += voltage[2];
            outright1 += " - E2";
        }else if (cell2 == 7 or cell2 == 8){
            allresistance += resistance[2];
        }
        if (cell4 == 1 or cell4 ==2 ){
            allvoltage += voltage[4];
            outright1 += " + E4";
        }else if (cell4 == 7 or cell4 == 8){
            allresistance += resistance[4];
        }

        if (cell3 == 1 or cell3 == 2) {
            allvoltage += voltage[3];
            outright1 += " - E3";
            outright3 += "E3";
        }
        if (cell5 == 1 or cell5 == 2) {
            allvoltage += voltage[5];
            outright3 += " - E5";
        }
        if (cell6 == 1 or cell6 == 2) {
            allvoltage += voltage[6];
            outright1 += " - E6";
            outright2 += "E6";
        }
        if (cell7 == 1 or cell7 == 2) {
            allvoltage += voltage[7];
            outright2 += " - E7";
        }
        if (outright1 == " = ") {
            outright1 += "0";
        }
        if (outright2 == " = ") {
            outright2 += "0";
        }
        if (outright3 == " = ") {
            outright3 += "0";
        }


        if (cell5 == 3 or cell5 == 4) {
            resistance[5] = (allvoltage*allvoltage/power[5]);
        }
        if (cell3 == 3 or cell3 == 4) {
            resistance[3] = (allvoltage*allvoltage/power[3]);
        }

        if (resistance[5]*resistance[3] !=0 ) {
            allresistance += (resistance[5]*resistance[3])/(resistance[5]+resistance[3]);
        }

        if (cell7 == 3 or cell7 == 4) {
            resistance[7] = (allvoltage*allvoltage/power[7]);
        }
        if (cell6 == 3 or cell6 == 4) {
            resistance[6] = (allvoltage*allvoltage/power[6]);
        }

        if (resistance[7]*resistance[6] !=0 ) {
            allresistance += (resistance[7]*resistance[6])/(resistance[7]+resistance[6]);
        }


        if (cell4 == 3 or cell4 ==4) {
            allresistance += allvoltage*allvoltage/power[4];
        }
        if (cell2 == 3 or cell2 ==4) {
            allresistance += allvoltage*allvoltage/power[2];
        }
        if (cell1 == 3 or cell1 ==4) {
            allresistance += allvoltage*allvoltage/power[1];
        }

        //1 контур
        if (cell1 == 7 or cell1 ==8) {
            outleft1 += "R1 +";
        }
        if (cell3 == 7 or cell3 ==8) {
            outleft1 += " R3 +";
            outright1.push_front(" - I3 * R3");
        }
        if (cell2 == 7 or cell2 ==8) {
            outleft1 += " R2 +";
        }
        if (cell4 == 7 or cell4 ==8) {
            outleft1 += " R4 +";
        }
        if (cell6 == 7 or cell6 ==8) {
            outleft1 += " R6 +";
            outright1.push_front(" - I2 * R6");
        }
        if (outleft1 == "I1 * (") {
            outleft1 += " * 0";
        } else {
            outleft1.chop(2);
            outleft1 += ")";
        }

        //2 контур
        if ((cell7 == 7 or cell7 ==8) and (cell6 == 7 or cell6 == 8)) {
            outleft2 += "(R7 + R6) - I1 * R6";
        } else if (cell6 == 7 or cell6 ==8) {
            outleft2 += "R6 - I1 * R6";
        } else if (cell7 == 7 or cell7 ==8) {
            outleft2 += "R7";
        }
        if (outleft2 == "I2 ") {
            outleft2 += " * 0";
        }

        //3 контур
        if ((cell5 == 7 or cell5 ==8) and (cell3 == 7 or cell3 == 8)) {
            outleft3 += "(R5 + R3) - I1 * R3";
        } else if (cell5 == 7 or cell5 ==8) {
            outleft3 += "R5 - I1 * R3";
        } else if (cell3 == 7 or cell3 ==8) {
            outleft3 += "R3";
        }
        if (outleft3 == "I3 ") {
            outleft3 += " * 0";
        }

        QString amperage = QString::number (allvoltage/allresistance);
        QString allout1 = outleft1 + outright1;
        QString allout2 = outleft2 + outright2;
        QString allout3 = outleft3 + outright3;
        if (allresistance == 0) {
            amperage = "Короткое замыкание!!";
            ui->label->setText( amperage);
        } else {
            ui->label_2->setText(allout1 + '\n' + allout2 + '\n' + allout3 + '\n');

            ui->label->setText("Сила тока в цепи = " + amperage + "А");
        }
        QString voltageText = "";

        if (cell1 == 3 or cell1 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[1]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[1])) + '\n';
        }
        if (cell2 == 3 or cell2 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[2]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[2])) + '\n';
        }
        if (cell3 == 3 or cell3 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[3]) + "Вт = " + QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[3])) + '\n';
        }
        if (cell4 == 3 or cell4 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[4]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[4])) + '\n';
        }
        if (cell5 == 3 or cell5 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[5]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[5])) + '\n';
        }
        if (cell6 == 3 or cell6 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[6]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[6])) + '\n';
        }
        if (cell7 == 3 or cell7 == 4) {
            voltageText = voltageText + "Напряжение на потребителе мощностью " + QString::number(power[7]) + "Вт = "+ QString::number(amperage.toDouble() * (allvoltage*allvoltage/power[7])) + '\n';
        }

        ui->label_13->setText(voltageText);
    }

    qint64 elapsedTime = timer.nsecsElapsed();
    double elapsedSeconds = elapsedTime / 1.0e9;
    qDebug() << "Время работы функции: " << elapsedTime << " нс (" << elapsedSeconds << " секунд)";
}



// Это элементы, которые принимают характеристики элементов

void MainWindow::slotFormResistor(QString a)
{
    if(ui->shema0_button1->isChecked() or ui->shema1_button1->isChecked() or ui->shema2_button1->isChecked() or ui->shema3_button1->isChecked() or ui->shema4_button1->isChecked())
    {
        resistance[1] = a.toDouble();
    }
    if(ui->shema0_button2->isChecked() or ui->shema1_button2->isChecked() or ui->shema2_button2->isChecked() or ui->shema3_button2->isChecked() or ui->shema4_button2->isChecked())
    {
        resistance[2] = a.toDouble();
    }
    if(ui->shema0_button3->isChecked() or ui->shema1_button3->isChecked() or ui->shema2_button3->isChecked() or ui->shema3_button3->isChecked() or ui->shema4_button3->isChecked())
    {
        resistance[3] = a.toDouble();
    }
    if(ui->shema0_button4->isChecked() or ui->shema1_button4->isChecked() or ui->shema2_button4->isChecked() or ui->shema3_button4->isChecked() or ui->shema4_button4->isChecked())
    {
        resistance[4] = a.toDouble();
    }
    if(ui->shema2_button5->isChecked() or ui->shema3_button5->isChecked() or ui->shema4_button5->isChecked())
    {
        resistance[5] = a.toDouble();
    }
    if(ui->shema3_button6->isChecked() or ui->shema4_button6->isChecked())
    {
        resistance[6] = a.toDouble();
    }
    if(ui->shema4_button7->isChecked())
    {
        resistance[7] = a.toDouble();
    }
    qDebug() << "resistanse: " << resistance[1];
    qDebug() << "resistanse: " << resistance[2];
    qDebug() << "resistanse: " << resistance[3];
    qDebug() << "resistanse: " << resistance[4];
    qDebug() << "resistanse: " << resistance[5];
    qDebug() << "resistanse: " << resistance[6];
    qDebug() << "resistanse: " << resistance[7];
}

void MainWindow::slotFormPower(QString b)
{
    if(ui->shema0_button1->isChecked() or ui->shema1_button1->isChecked() or ui->shema2_button1->isChecked() or ui->shema3_button1->isChecked() or ui->shema4_button1->isChecked())
    {
        power[1] = b.toDouble();
    }
    if(ui->shema0_button2->isChecked() or ui->shema1_button2->isChecked() or ui->shema2_button2->isChecked() or ui->shema3_button2->isChecked() or ui->shema4_button2->isChecked())
    {
        power[2] = b.toDouble();
    }
    if(ui->shema0_button3->isChecked() or ui->shema1_button3->isChecked() or ui->shema2_button3->isChecked() or ui->shema3_button3->isChecked() or ui->shema4_button3->isChecked())
    {
        power[3] = b.toDouble();
    }
    if(ui->shema0_button4->isChecked() or ui->shema1_button4->isChecked() or ui->shema2_button4->isChecked() or ui->shema3_button4->isChecked() or ui->shema4_button4->isChecked())
    {
        power[4] = b.toDouble();
    }
    if(ui->shema2_button5->isChecked() or ui->shema3_button5->isChecked() or ui->shema4_button5->isChecked())
    {
        power[5] = b.toDouble();
    }
    if(ui->shema3_button6->isChecked() or ui->shema4_button6->isChecked())
    {
        power[6] = b.toDouble();
    }
    if(ui->shema4_button7->isChecked())
    {
        power[7] = b.toDouble();
    }
    qDebug() << "power: " << power[1];
    qDebug() << "power: " << power[2];
    qDebug() << "power: " << power[3];
    qDebug() << "power: " << power[4];
    qDebug() << "power: " << power[5];
    qDebug() << "power: " << power[6];
    qDebug() << "power: " << power[7];
}

void MainWindow::slotFormVoltage(QString c)
{
    if(ui->shema0_button1->isChecked() or ui->shema1_button1->isChecked() or ui->shema2_button1->isChecked() or ui->shema3_button1->isChecked() or ui->shema4_button1->isChecked())
    {
        voltage[1] = c.toDouble();
    }
    if(ui->shema0_button2->isChecked() or ui->shema1_button2->isChecked() or ui->shema2_button2->isChecked() or ui->shema3_button2->isChecked() or ui->shema4_button2->isChecked())
    {
        voltage[2] = c.toDouble();
    }
    if(ui->shema0_button3->isChecked() or ui->shema1_button3->isChecked() or ui->shema2_button3->isChecked() or ui->shema3_button3->isChecked() or ui->shema4_button3->isChecked())
    {
        voltage[3] = c.toDouble();
    }
    if(ui->shema0_button4->isChecked() or ui->shema1_button4->isChecked() or ui->shema2_button4->isChecked() or ui->shema3_button4->isChecked() or ui->shema4_button4->isChecked())
    {
        voltage[4] = c.toDouble();
    }
    if(ui->shema2_button5->isChecked() or ui->shema3_button5->isChecked() or ui->shema4_button5->isChecked())
    {
        voltage[5] = c.toDouble();
    }
    if(ui->shema3_button6->isChecked() or ui->shema4_button6->isChecked())
    {
        voltage[6] = c.toDouble();
    }
    if(ui->shema4_button7->isChecked())
    {
        voltage[7] = c.toDouble();
    }
    qDebug() << "voltage: " << voltage[1];
    qDebug() << "voltage: " << voltage[2];
    qDebug() << "voltage: " << voltage[3];
    qDebug() << "voltage: " << voltage[4];
    qDebug() << "voltage: " << voltage[5];
    qDebug() << "voltage: " << voltage[6];
    qDebug() << "voltage: " << voltage[7];
}

void MainWindow::slotFormCapacitance(QString d)
{
    if(ui->shema0_button1->isChecked() or ui->shema1_button1->isChecked() or ui->shema2_button1->isChecked() or ui->shema3_button1->isChecked() or ui->shema4_button1->isChecked())
    {
        capacitance[1] = d.toDouble();
    }
    if(ui->shema0_button2->isChecked() or ui->shema1_button2->isChecked() or ui->shema2_button2->isChecked() or ui->shema3_button2->isChecked() or ui->shema4_button2->isChecked())
    {
        capacitance[2] = d.toDouble();
    }
    if(ui->shema0_button3->isChecked() or ui->shema1_button3->isChecked() or ui->shema2_button3->isChecked() or ui->shema3_button3->isChecked() or ui->shema4_button3->isChecked())
    {
        capacitance[3] = d.toDouble();
    }
    if(ui->shema0_button4->isChecked() or ui->shema1_button4->isChecked() or ui->shema2_button4->isChecked() or ui->shema3_button4->isChecked() or ui->shema4_button4->isChecked())
    {
        capacitance[4] = d.toDouble();
    }
    if(ui->shema2_button5->isChecked() or ui->shema3_button5->isChecked() or ui->shema4_button5->isChecked())
    {
        capacitance[5] = d.toDouble();
    }
    if(ui->shema3_button6->isChecked() or ui->shema4_button6->isChecked())
    {
        capacitance[6] = d.toDouble();
    }
    if(ui->shema4_button7->isChecked())
    {
        capacitance[7] = d.toDouble();
    }
    qDebug() << "capacitance: " << capacitance[1];
    qDebug() << "capacitance: " << capacitance[2];
    qDebug() << "capacitance: " << capacitance[3];
    qDebug() << "capacitance: " << capacitance[4];
    qDebug() << "capacitance: " << capacitance[5];
    qDebug() << "capacitance: " << capacitance[6];
    qDebug() << "capacitance: " << capacitance[7];
}


