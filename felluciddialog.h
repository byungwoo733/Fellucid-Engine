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
#ifndef FELLUCIDDIALOG_H
#define FELLUCIDDIALOG_H

#include <QDialog>

namespace Ui {
class FellucidDialog;
}

class FellucidDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FellucidDialog(QWidget *parent = 0);
    ~FellucidDialog();

private:
    Ui::FellucidDialog *ui;
};

#endif // FELLUCIDDIALOG_H
