QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    allan.cpp \
    azhar.cpp \
    barbara.cpp \
    chambers.cpp \
    chen.cpp \
    errera.cpp \
    faculty.cpp \
    fiterman.cpp \
    fiterman5f.cpp \
    fiterman9f.cpp \
    fred.cpp \
    info.cpp \
    jason.cpp \
    ke.cpp \
    leung.cpp \
    liana.cpp \
    login.cpp \
    main.cpp \
    maincampus.cpp \
    mainwindow.cpp \
    mark.cpp \
    metekok.cpp \
    oleg.cpp \
    person.cpp \
    stephen.cpp \
    tang.cpp \
    wei.cpp

HEADERS += \
    allan.h \
    azhar.h \
    barbara.h \
    chambers.h \
    chen.h \
    errera.h \
    faculty.h \
    fiterman.h \
    fiterman5f.h \
    fiterman9f.h \
    fred.h \
    info.h \
    jason.h \
    ke.h \
    leung.h \
    liana.h \
    login.h \
    maincampus.h \
    mainwindow.h \
    mark.h \
    metekok.h \
    oleg.h \
    person.h \
    stephen.h \
    tang.h \
    wei.h

FORMS += \
    allan.ui \
    azhar.ui \
    barbara.ui \
    chambers.ui \
    chen.ui \
    errera.ui \
    fiterman.ui \
    fiterman5f.ui \
    fiterman9f.ui \
    fred.ui \
    jason.ui \
    ke.ui \
    leung.ui \
    liana.ui \
    login.ui \
    maincampus.ui \
    mainwindow.ui \
    mark.ui \
    metekok.ui \
    oleg.ui \
    stephen.ui \
    tang.ui \
    wei.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DISTFILES +=
