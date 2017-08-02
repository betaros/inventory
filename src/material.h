#ifndef MATERIAL_H
#define MATERIAL_H

#include <QObject>
#include "config.h"

class Material
{
public:
    Material();

    QString     getName();
    void        setName(QString _name);
    QString     getDescription();
    void        setDescription(QString _description);
    QString     getUnit();
    void        setUnit(QString _unit);
    QPixmap     getImage();
    void        setImage(QPixmap _image);
    int         getCost();
    void        setCost(int _cost);
    double      getAmount();
    void        setAmount(double _amount);

private:
    QString     name;
    QString     description;
    QString     unit;
    QPixmap     image;
    int         cost;
    double      amount;
};

#endif // MATERIAL_H
