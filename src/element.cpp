#include "element.h"

Element::Element()
{

}

int Element::getId()
{
    return id;
}

QString Element::getName()
{
    return name;
}

void Element::setName(QString _name)
{
    name = _name;
}

QString Element::getDescription()
{
    return description;
}

void Element::setDescription(QString _description)
{
    description = _description;
}

QString Element::getSource()
{
    return source;
}

void Element::setSource(QString _source)
{
    source = _source;
}

int Element::getPriceInt()
{
    return price;
}

double Element::getPriceDouble()
{
    return (double)(price / 100.0);
}

void Element::setPrice(int _price)
{
    price = _price;
}

void Element::setPrice(double _price)
{
    price = (int)(_price * 100.0);
}

Material Element::getMaterial(int _id)
{
    return materials.at(_id);
}

bool Element::addMaterial(Material _material)
{
    materials.append(_material);
    // TODO:
    // - Test if append successful
    // - add to db
    return true;
}

bool Element::removeMaterial(int _id)
{
    materials.removeAt(_id);
    // TODO:
    // - Test if remove successful
    // - remove from db
    return true;
}

int Element::getMaterialListSize()
{
    return materials.size();
}

