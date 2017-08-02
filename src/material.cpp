#include "material.h"

Material::Material()
{

}

QString Material::getName()
{
    return name;
}

void Material::setName(QString _name)
{
    name = _name;
}

QString Material::getDescription()
{
    return description;
}

void Material::setDescription(QString _description)
{
    description = _description;
}

QString Material::getUnit()
{
    return unit;
}

void Material::setUnit(QString _unit)
{
    unit = _unit;
}

QPixmap Material::getImage()
{
    return image;
}

void Material::setImage(QPixmap _image)
{
    image = _image;
}

int Material::getCost()
{
    return cost;
}

void Material::setCost(int _cost)
{
    cost = _cost;
}

double Material::getAmount()
{
    return amount;
}

void Material::setAmount(double _amount)
{
    amount = _amount;
}
