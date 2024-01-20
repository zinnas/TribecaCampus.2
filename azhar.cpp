// azhar.cpp
#include "azhar.h"
#include "ui_azhar.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QCoreApplication>
#include <QDesktopServices>
#include <QUrl>

Azhar::Azhar(QWidget *parent)
    : QDialog(parent), Info(), ui(new Ui::Azhar)
{
    ui->setupUi(this);
}

Azhar::~Azhar()
{
    delete ui;
}

void Azhar::on_pushButton_clicked()
{
    try {
        QFile azharInfo(getAzharInfo());

        if (!azharInfo.open(QFile::ReadOnly | QFile::Text))
            throw std::runtime_error("Error! Error opening info file! Check file directory.");

        QTextStream in(&azharInfo);
        QString text = in.readAll();
        ui->plainTextEdit->setPlainText(text);

        azharInfo.close();
    } catch (std::runtime_error &QInfoMissing) {
        qCritical() << QInfoMissing.what();
    }
}

void Azhar::on_pushButton_2_clicked()
{
    QUrl websiteUrl("https://www.bmcc.cuny.edu/faculty/mohammad-azhar/");

    if(!QDesktopServices::openUrl(websiteUrl)){
            qWarning("Coudl not open URL");
        }
}

