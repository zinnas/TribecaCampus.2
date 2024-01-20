#include "ke.h"
#include "ui_ke.h"

Ke::Ke(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Ke)
{
    ui->setupUi(this);
}

Ke::~Ke()
{
    delete ui;
}
