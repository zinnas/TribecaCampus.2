#include "liana.h"
#include "ui_liana.h"

Liana::Liana(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Liana)
{
    ui->setupUi(this);
}

Liana::~Liana()
{
    delete ui;
}
