#-------------------------------------------------
#
# Project created by QtCreator 2015-04-14T20:12:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DecCartas
TEMPLATE = app


SOURCES += main.cpp\ 
    mainwindow.cpp \
    letter.cpp \
    suit.cpp \
    dec.cpp \
    sentence.cpp

HEADERS  += mainwindow.h \
    letter.h \
    dictionary.h \
    sad.h \
    suit.h \
    dec.h \
    sentence.h

FORMS    += mainwindow.ui
