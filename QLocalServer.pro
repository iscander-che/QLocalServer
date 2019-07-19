# Кроме модулей core gui подключаем network
QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QLocalServer
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
        mylocalserver.cpp

HEADERS += \
        mylocalserver.h
