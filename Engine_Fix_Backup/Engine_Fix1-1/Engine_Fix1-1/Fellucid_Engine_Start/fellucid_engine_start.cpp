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
#include "fellucid_engine_start.h"
#include "ui_fellucid_engine_start.h"

Fellucid_Engine_Start::Fellucid_Engine_Start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fellucid_Engine_Start)
{
    ui->setupUi(this);

    QPixmap pix("F:/fellucid.png");
    ui->label_pic->setPixmap(pix.scaled(200,200,Qt::KeepAspectRatio));
}

Fellucid_Engine_Start::~Fellucid_Engine_Start()
{
    delete ui;
}

void Fellucid_Engine_Start::on_pushButton_clicked()
{

}
