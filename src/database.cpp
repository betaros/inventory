#include "database.h"

Database::Database(const QString& _path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    path = _path;

    if (!m_db.open())
    {
        dialog.setMessage("Error: connection with database fail");
        dialog.exec();
    } else {
        dialog.setMessage("Database: connection ok");
        dialog.exec();
    }
}

bool Database::createDb()
{
    bool result = false;

    QSqlQuery query;
    query.prepare("CREATE TABLE customers (id INTEGER PRIMARY KEY AUTOINCREMENT UNIQUE, Name TEXT, Description TEXT, Image TEXT, Materials INTEGER);");

    query.prepare("CREATE TABLE elements (Id INTEGER PRIMARY KEY AUTOINCREMENT UNIQUE, Name TEXT, Price INTEGER, Description TEXT, Source TEXT, Materials INTEGER);");

    query.prepare("CREATE TABLE materials (Id INTEGER PRIMARY KEY AUTOINCREMENT UNIQUE, Name TEXT, Image TEXT, Description TEXT, Cost INTEGER, Unit TEXT, Amount INTEGER);");


    if(query.exec())
    {
        result = true;
    } else {
        dialog.setMessage("Database: Couldn't create Database.");
        dialog.exec();
        qDebug() << "createDb error:  "
                  << query.lastError();
    }

    return result;
}

bool Database::dbSetCustomer(Customer *customer)
{
    bool result = false;

    QSqlQuery query;
    query.prepare("REPLACE INTO customers (name) VALUES (:name)");
    query.bindValue(":name", customer->getName());
    if(query.exec())
    {
        result = true;
    } else {
        dialog.setMessage("Database: Couldn't add Customer.");
        dialog.exec();
        qDebug() << "dbSetCustomer error:  "
                  << query.lastError();
    }

    return result;
}

bool Database::dbSetElement(Element *element)
{
    bool result = false;

    QSqlQuery query;
    query.prepare("REPLACE INTO elements (name) VALUES (:name)");
    query.bindValue(":name", element->getName());
    if(query.exec())
    {
        result = true;
    } else {
        dialog.setMessage("Database: Couldn't add Element.");
        dialog.exec();
        qDebug() << "dbSetElement error:  "
                  << query.lastError();
    }

    return result;
}

bool Database::dbSetMaterial(Material *material)
{
    bool result = false;

    QSqlQuery query;
    query.prepare("REPLACE INTO materials (name) VALUES (:name)");
    query.bindValue(":name", material->getName());
    if(query.exec())
    {
        result = true;
    }
    else
    {
        dialog.setMessage("Database: Couldn't add Material.");
        dialog.exec();
        qDebug() << "dbSetMaterial error:  "
                  << query.lastError();
    }

    return result;
}
