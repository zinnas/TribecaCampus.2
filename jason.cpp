#include "jason.h"
#include "ui_jason.h"

Jason::Jason(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Jason)
{
    ui->setupUi(this);
}

Jason::~Jason()
{
    delete ui;
}
