#-------------------------------------------------
#
# Project created by QtCreator 2016-11-19T23:40:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CNCFlat
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    DisclaimerDialog.cpp \
    AxisDialog.cpp \
    CNCRoutine.cpp \
    RoutingDialog.cpp \
    PixelDialog.cpp \
    UserProfile.cpp \
    TemplateMaker.cpp \
    SizeDialog.cpp \
    MessageDialog.cpp

HEADERS  += MainWindow.h \
    DisclaimerDialog.h \
    AxisDialog.h \
    CNCRoutine.h \
    RoutingDialog.h \
    PixelDialog.h \
    UserProfile.h \
    TemplateMaker.h \
    SizeDialog.h \
    UIUtil.h \
    CNCConstants.h \
    MessageDialog.h

FORMS    += MainWindow.ui \
    DisclaimerDialog.ui \
    AxisDialog.ui \
    RoutingDialog.ui \
    PixelDialog.ui \
    SizeDialog.ui \
    MessageDialog.ui \
    MDIFileErr.ui \
    MDIFormatErr.ui

RESOURCES += \
    ImgRes.qrc
