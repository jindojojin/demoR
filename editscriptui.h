#ifndef EDITSCRIPTUI_H
#define EDITSCRIPTUI_H

#include <QDialog>
#include "scriptcreator.h"

namespace Ui {
class EditScriptUi;
}

class EditScriptUi : public QDialog
{
    Q_OBJECT

public:
    explicit EditScriptUi(QWidget *parent = 0);
    ~EditScriptUi();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EditScriptUi *ui;
};

#endif // EDITSCRIPTUI_H
