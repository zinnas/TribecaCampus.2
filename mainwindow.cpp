#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSignIn_clicked()
{
    hide();
    Login login;
    login.setModal(true); //Creating the login page by modal approach
    login.exec();
}



