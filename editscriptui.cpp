#include "editscriptui.h"
#include "ui_editscriptui.h"
#include <iostream>
EditScriptUi::EditScriptUi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditScriptUi)
{
    ui->setupUi(this);
}

EditScriptUi::~EditScriptUi()
{
    delete ui;
}

void EditScriptUi::on_buttonBox_accepted()
{
    ScriptCreator * scriptCreator = new ScriptCreator();
    scriptCreator->createStandard();
}
