/****************************************************************************/
//Fellucid Engine is Individual Game Engine and Open Game Engine By Spread Wing Studio
//______________________________ _____  ________________________
//___  ____/__  ____/__  /___  / __  / / /_  ____/___  _/__  __ \
//__  /_   __  __/  __  / __  /  _  / / /_  /     __  / __  / / /
//_  __/   _  /___  _  /___  /___/ /_/ / / /___  __/ /  _  /_/ /
//_/      /_____/  /_____/_____/\____/  \____/  /___/  /_____/
//
//______________   _____________________   ___________
//___  ____/__  | / /_  ____/___  _/__  | / /__  ____/
//__  __/  __   |/ /_  / __  __  / __   |/ /__  __/
//_  /___  _  /|  / / /_/ / __/ /  _  /|  / _  /___
//_____/  /_/ |_/  \____/  /___/  /_/ |_/  /_____/
/****************************************************************************/
#include "fellucid_login_widget.h"
#include "ui_fellucid_login_widget.h"
#include <QMessageBox>
#include <QPixmap>
Fellucid_Login_Widget::Fellucid_Login_Widget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fellucid_Login_Widget)
{
    ui->setupUi(this);
    //    *I just skipped this setting because I`m fiding this code meaning
    //    QPixmap pix("F:\fellucid_Login_Smalllog.png");
    //    int w = ui->label_pic->width();
    //    int h = ui->label_pic->height();
    //    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

Fellucid_Login_Widget::~Fellucid_Login_Widget()
{
    delete ui;
}

void Fellucid_Login_Widget::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "test" && password == "test") {
        QMessageBox::information(this, "Login", "Username and password is correct");
        //*I just skipped this setting because I`m fiding this code meaning
        //hide();
        //fellcidDialog = new FellucidDialog(this);
        //fellcidDialog->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Username and password is not correct");
    }
}
