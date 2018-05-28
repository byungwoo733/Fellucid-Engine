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
#ifndef FELLUCID_ENGINE_START_H
#define FELLUCID_ENGINE_START_H

#include <QMainWindow>

namespace Ui {
class Fellucid_Engine_Start;
}

class Fellucid_Engine_Start : public QMainWindow
{
    Q_OBJECT

public:
    explicit Fellucid_Engine_Start(QWidget *parent = 0);
    ~Fellucid_Engine_Start();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Fellucid_Engine_Start *ui;
};

#endif // FELLUCID_ENGINE_START_H
