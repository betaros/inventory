#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include "config.h"
#include "customer.h"
#include "element.h"
#include "material.h"
#include "dialog.h"

class Database
{
public:
    Database(const QString& path);

    bool dbSetCustomer(Customer *customer);
    bool dbSetElement(Element *element);
    bool dbSetMaterial(Material *material);

    Customer dbGetCustomer();
    Element dbGetElement();
    Material dbGetMaterial();

private:
    QSqlDatabase m_db;
    QString path;
    Dialog dialog;
};

#endif // DATABASE_H

