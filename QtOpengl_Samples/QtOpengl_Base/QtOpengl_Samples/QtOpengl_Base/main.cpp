#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setTitle("Opengl Tutorial");
    w.resize(1920, 1080);
    w.show();

    return a.exec();
}
