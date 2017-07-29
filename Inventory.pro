#-------------------------------------------------
#
# Project created by QtCreator 2017-07-14T17:13:25
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Inventory
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        src/main.cpp \
        src/mainwindow.cpp \
		src/element.cpp \
		src/customer.cpp \
		src/material.cpp \
		src/widgetmaterial.cpp \
		src/widgetelement.cpp \
		src/widgetcustomer.cpp \
		src/database.cpp \
    src/dialog.cpp

HEADERS += \
        src/mainwindow.h \
		src/element.h \
		src/customer.h \
		src/material.h \
		src/config.h \
		src/widgetmaterial.h \
		src/widgetelement.h \
		src/widgetcustomer.h \
                src/database.h \
    src/dialog.h

FORMS += \
        src/mainwindow.ui \
		src/widgetmaterial.ui \
		src/widgetelement.ui \
		src/widgetcustomer.ui \
    src/dialog.ui

RESOURCES += \
		resources.qrc
