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
#ifndef FELLUCID_LOGIN_WIDGET_H
#define FELLUCID_LOGIN_WIDGET_H

#include <QMainWindow>
#include "felluciddialog.h"
namespace Ui {
class Fellucid_Login_Widget;
}

class Fellucid_Login_Widget : public QMainWindow
{
    Q_OBJECT

public:
    explicit Fellucid_Login_Widget(QWidget *parent = 0);
    ~Fellucid_Login_Widget();

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::Fellucid_Login_Widget *ui;
    FellucidDialog * fellcidDialog;
};

#endif // FELLUCID_LOGIN_WIDGET_H
