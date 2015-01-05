#-------------------------------------------------
#
# Project created by QtCreator 2014-11-04T16:02:40
#
#-------------------------------------------------

QT       += core gui
QT       += printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = imageviewer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imgviewer.cpp \
    aboutdlg.cpp

HEADERS  += mainwindow.h \
    imgviewer.h \
    aboutdlg.h

FORMS    += mainwindow.ui \
    aboutdlg.ui

RESOURCES += \
    imageViewer.qrc
