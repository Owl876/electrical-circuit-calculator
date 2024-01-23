#include "mainwindow.h"
#include <QLabel>
#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    qApp->setStyle(QStyleFactory::create("Fusion"));
    w.setWindowTitle("Калькулятор электрических цепей");
    w.show();

    return a.exec();
}
