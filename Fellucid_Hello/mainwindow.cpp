#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsView(this);
    ui->graphicsView->setScene(scene);

    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackpen(Qt::black);
    blackpen.setWidth(6);

    ellipse = scene->addEllipse(10,10,100,100,blackpen,redBrush);
    rectangle = scene->addRect(-100,-100,50,50,blackpen,blueBrush);
    rectangle->setFlag(QGraphicsItem::ItemIsMovable);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    QMenu::information(this,"title","New");
}

void MainWindow::on_actionOpen_File_Project_triggered()
{
    QMenu::information(this,"title","Open1");
}



void MainWindow::on_actionOpen_File_with_Project_triggered()
{
    QMenu::information(this,"title","Open2");
}



void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

/*
menu[0] = new QMenu("File");
menu[0] -> addAction ("Edit");
menu[0] -> addAction ("View");
menu[0] -> addAction ("Tools");

act[0] = new QAction("New", this);
act[0] -> setShortcut(Qt::CTRL | Qt::Key_A);
act[0] -> setStatusTip("This is a New menu.");

act[1] = new QAction("Open", this);
act[1] -> setCheckable(true);

menu[1] = new Qmenu("Save");
menu[1] = addAction(act[0]);
menu[1] = addAction(act[1]);

menu[2] = new Qmenu("Print");
menu[2] = addAction("Page Setup");
menu[2] = addMenu(menu[1]);

menuBar->addMenu(menu[0]);
menuBar->addMenu(menu[2]);
*/
