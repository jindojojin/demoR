#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap image("");
    ui->label->setPixmap(image);
    ui->label->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    EditScriptUi editScriptUi;
    editScriptUi.setModal(true);
    editScriptUi.exec();
}
