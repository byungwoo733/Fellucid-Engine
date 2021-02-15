include(openglwindow.pri)

SOURCES += \
    main.cpp \
    openglwindow.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/gui/openglwindow
INSTALLS += target

HEADERS += \
    openglwindow.h
