#include "fred.h"
#include "ui_fred.h"
#include <QString>
#include "faculty.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QCoreApplication>
#include <QDesktopServices>
#include <QUrl>

Fred::Fred(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Fred)
{
    ui->setupUi(this);
}

Fred::~Fred()
{
    delete ui;
}



void Fred::on_pushButton_clicked()
{
    Faculty faculty;
    QFile info(faculty.getFredInfo());

    if(!info.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "file not open");
    }

    QTextStream in(&info);
    QString text = info.readAll();
    ui-> plainTextEdit -> setPlainText(text);
}




void Fred::on_pushButtonwebSite_clicked()
{
    //the URL of the website you want to open
    QUrl websiteUrl("https://www.bmcc.cuny.edu/faculty/fred-peskoff/");

    // Open the default web browser with the specified URL
    if (!QDesktopServices::openUrl(websiteUrl)) {
        qWarning("Could not open URL");

    }

}

