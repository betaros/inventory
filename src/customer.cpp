#include "customer.h"

Customer::Customer()
{

}

int Customer::getId()
{
    return id;
}

QString Customer::getName()
{
    return name;
}

void Customer::setName(QString _name)
{
    name = _name;
}

QString Customer::getDescription()
{
    return description;
}

void Customer::setDescription(QString _description)
{
    description = _description;
}

QPixmap Customer::getImage()
{
    return image;
}

void Customer::setImage(QPixmap _image)
{
    image = _image;
}

Element Customer::getElement(int _id)
{
    return elements.at(_id);
}

bool Customer::addElement(Element _element)
{
    elements.append(_element);
    // TODO:
    // - Test if append successful
    // - add to db
    return true;
}

bool Customer::removeElement(int _id)
{
    elements.removeAt(_id);
    // TODO:
    // - Test if remove successful
    // - remove from db
    return true;
}

int Customer::getElementListSize()
{
    return elements.size();
}
