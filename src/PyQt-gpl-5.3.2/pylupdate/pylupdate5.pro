TEMPLATE = app
QT -= gui
QT += xml
CONFIG += warn_on release
CONFIG += console
CONFIG -= android_install
target.path = C:\Python27
INSTALLS += target
INCLUDEPATH += C:\Users\marcus\Downloads\PyQt-gpl-5.3.2\pylupdate
VPATH = C:\Users\marcus\Downloads\PyQt-gpl-5.3.2\pylupdate
HEADERS = metatranslator.h proparser.h simtexth.h translator.h
SOURCES = fetchtr.cpp main.cpp merge.cpp metatranslator.cpp numberh.cpp proparser.cpp sametexth.cpp simtexth.cpp translator.cpp