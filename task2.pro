TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11 
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG+=c++11
SOURCES += main.cpp \
    sensor.cpp \
    motion_sensor.cpp \
    smoke_detector.cpp \
    gas_sensor.cpp \
    action.cpp \
    fire_brigade.cpp \
    call_police.cpp \
    evacuate.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    sensor.h \
    motion_sensor.h \
    smoke_detector.h \
    gas_sensor.h \
    action.h \
    fire_brigade.h \
    call_police.h \
    evacuate.h

