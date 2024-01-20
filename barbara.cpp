#include "barbara.h"
#include "ui_barbara.h"

Barbara::Barbara(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Barbara)
{
    ui->setupUi(this);
}

Barbara::~Barbara()
{
    delete ui;
}
