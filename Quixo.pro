#-------------------------------------------------
#
# Project created by QtCreator 2015-04-01T11:15:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Quixo
TEMPLATE = app


SOURCES += main.cpp\
        quixo.cpp \
    piece.cpp

HEADERS  += quixo.h \
    piece.h

FORMS    += quixo.ui

RESOURCES += \
    ressources.qrc
