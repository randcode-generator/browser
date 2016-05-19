TEMPLATE = app
TARGET = browser
DEPENDPATH += .

QT += gui network webkit 
CONFIG += console
CONFIG += static

HEADERS += browser.h
SOURCES += browser.cpp
