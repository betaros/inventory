#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QObject>
#include "config.h"
#include "element.h"

class Customer
{
public:
    Customer();

    int             getId();
    QString         getName();
    void            setName(QString _name);
    QString         getDescription();
    void            setDescription(QString _description);
    QPixmap         getImage();
    void            setImage(QPixmap _image);
    Element         getElement(int _id);
    bool            addElement(Element _element);
    bool            removeElement(int _id);
    int             getElementListSize();

private:
    int             id;
    QString         name;
    QString         description;
    QPixmap         image;
    QList<Element>  elements;
};

#endif // CUSTOMER_H
