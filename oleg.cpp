#include "oleg.h"
#include "ui_oleg.h"

Oleg::Oleg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Oleg)
{
    ui->setupUi(this);
}

Oleg::~Oleg()
{
    delete ui;
}
