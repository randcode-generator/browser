TEMPLATE = app
TARGET = browser
DEPENDPATH += .

INCLUDEPATH += '/home/eric/browser/qt/include'

QT += gui network webkit 
CONFIG += console
CONFIG += static

HEADERS += browser.h
SOURCES += browser.cpp