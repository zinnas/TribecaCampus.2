#include "fiterman5f.h"
#include "ui_fiterman5f.h"
#include "faculty.h"
#include "fred.h"
#include "liana.h"
#include "stephen.h"
#include "allan.h"
#include "mark.h"
#include "barbara.h"
#include "oleg.h"
#include "jason.h"
#include "ke.h"
#include "fiterman.h"


Fiterman5f::Fiterman5f(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Fiterman5f)
{
    ui->setupUi(this);
}

Fiterman5f::~Fiterman5f()
{
    delete ui;
}

/*void Fiterman5f::on_pushButtonFred_clicked()
{


    Faculty professor;
    professor.getFredInfo();
}

*/

void Fiterman5f::on_pushButtonFred_clicked()
{
    Fred p;
    p.setModal(true);
    p.exec();
}


void Fiterman5f::on_pushButtonLiana_clicked()
{
    Liana l;
    l.setModal(true);
    l.exec();
}


void Fiterman5f::on_pushButtonStephen_clicked()
{
    Stephen s;
    s.setModal(true);
    s.exec();
}


void Fiterman5f::on_pushButtonAllan_clicked()
{
    Allan a;
    a.setModal(true);
    a.exec();
}


void Fiterman5f::on_pushButtonMark_clicked()
{
    Mark m;
    m.setModal(true);
    m.exec();
}


void Fiterman5f::on_pushButtonBarbara_clicked()
{
    Barbara b;
    b.setModal(true);
    b.exec();
}


void Fiterman5f::on_pushButtonOleg_clicked()
{
    Oleg o;
    o.setModal(true);
    o.exec();
}


void Fiterman5f::on_pushButtonJason_clicked()
{
    Jason j;
    j.setModal(true);
    j.exec();
}


void Fiterman5f::on_pushButtonKe_clicked()
{
    Ke k;
    k.setModal(true);
    k.exec();
}


void Fiterman5f::on_pushButton_clicked()
{
    hide();
    Fiterman f;
    f.setModal(true);
    f.exec();
}

