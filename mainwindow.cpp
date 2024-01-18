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
double voltage = 0, power = 0, resistance = 0, capacitance = 0;



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
    // Это стандартный метод вывода на экран (текст появится в правом верхем углу)
    ui->label->setText("Хелоу");
}

void MainWindow::on_shema1_calculate_clicked()
{

}

void MainWindow::on_shema2_calculate_clicked()
{

}

void MainWindow::on_shema3_calculate_clicked()
{

}

void MainWindow::on_shema4_calculate_clicked()
{

}



// Это элементы, которые принимают характеристики элементов

void MainWindow::slotFormResistor(QString a)
{
    ui->label->setText(a);
    resistance = a.toDouble();
    qDebug() << "resistanse: " << resistance;
}

void MainWindow::slotFormPower(QString b)
{
    ui->label->setText(b);
    power = b.toDouble();
    qDebug() << "power: " << power;
}

void MainWindow::slotFormVoltage(QString c)
{
    ui->label->setText(c);
    voltage = c.toDouble();
    qDebug() << "voltage: " << voltage;
}

void MainWindow::slotFormCapacitance(QString d)
{
    ui->label->setText(d);
    capacitance = d.toDouble();
    qDebug() << "capacitance: " << capacitance;
}


