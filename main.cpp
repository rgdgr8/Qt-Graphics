#include "mainwindow.h"
#include <QApplication>
#include <QVector>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Graphics Lab Project");
    w.show();

    return a.exec();
}
