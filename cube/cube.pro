#-------------------------------------------------
#
# Project created by QtCreator 2017-07-04T09:15:05
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += C++17

QT += widgets
QT += serialport
TARGET = cube
TEMPLATE = app

INCLUDEPATH += /usr/include/opencv4

LIBS += -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc -lopencv_videoio

SOURCES += main.cpp\
    arduino.cpp \
    colorcalibrator.cpp \
    colorreader.cpp \
    cube.cpp \
    identification.cpp \
    layerssolver.cpp \
    mainwindow.cpp \
    optimalsolver.cpp \
    rotator.cpp \
    square.cpp \
    utils.cpp

HEADERS  += mainwindow.h \
    arduino.h \
    colorcalibrator.h \
    colorreader.h \
    constants.h \
    cube.h \
    enums.h \
    layerssolver.h \
    microcontroller.h \
    observable.h \
    observer.h \
    optimalsolver.h \
    rotator.h \
    solver.h \
    square.h \
    utils.h

FORMS    += mainwindow.ui

DISTFILES += \
    table_edge2.rht \
    table_edge1.rht \
    table_corner.rht \
    tables.md5 \
    tags \
    COPYING
