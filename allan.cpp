#include "allan.h"
#include "ui_allan.h"

Allan::Allan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Allan)
{
    ui->setupUi(this);
}

Allan::~Allan()
{
    delete ui;
}
