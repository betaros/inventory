#include "mainwindow.h"
#include "database.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Database db("C:/Users/betar/Desktop/testdb.sqlite");


    return a.exec();
}
