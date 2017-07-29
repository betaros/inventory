#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::setMessage(QString _message)
{
    ui->lblMessage->setText(_message);
}

Dialog::~Dialog()
{
    delete ui;
}
