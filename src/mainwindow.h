#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "config.h"
#include <QMainWindow>

#include "widgetcustomer.h"
#include "widgetelement.h"
#include "widgetmaterial.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    widgetCustomer wCustomer;
    //widgetElement Element;
    //widgetMaterial Material;
};

#endif // MAINWINDOW_H
