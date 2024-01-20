#include "mark.h"
#include "ui_mark.h"

Mark::Mark(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Mark)
{
    ui->setupUi(this);
}

Mark::~Mark()
{
    delete ui;
}
