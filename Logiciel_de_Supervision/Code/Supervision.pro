#-------------------------------------------------
#
# Project created by QtCreator 2013-02-12T11:22:20
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Supervision
TEMPLATE = app
SOURCES += main.cpp \
        ihm.cpp \
    contenuonglet.cpp \
    bdd.cpp \
    dynamique.cpp \
    affichealarme.cpp
HEADERS  += ihm.h \
    contenuonglet.h \
    dynamique.h \
    bdd.h \
    affichealarme.h

FORMS    += ihm.ui
