#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QGridLayout *widgetDetailsLayout = new QGridLayout(this);
    //widgetDetailsLayout->addWidget(wCustomer,0,0);

    //ui->widgetDetails->setLayout(widgetDetailsLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}
