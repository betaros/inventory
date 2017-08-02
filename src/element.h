#ifndef ELEMENT_H
#define ELEMENT_H

#include <QObject>
#include "material.h"
#include "config.h"

class Element
{
public:
    Element();

    int             getId();
    QString         getName();
    void            setName(QString _name);
    QString         getDescription();
    void            setDescription(QString _description);
    QString         getSource();
    void            setSource(QString _source);
    int             getPriceInt();
    double          getPriceDouble();
    void            setPrice(int _price);
    void            setPrice(double _price);
    Material        getMaterial(int _id);
    bool            addMaterial(Material _material);
    bool            removeMaterial(int _id);
    int             getMaterialListSize();

private:
    int             id;
    QString         name;
    QString         description;
    QString         source;
    int             price;
    QList<Material> materials;
};

#endif // ELEMENT_H
