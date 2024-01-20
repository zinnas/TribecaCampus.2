#ifndef FRED_H
#define FRED_H
#include "faculty.h"

#include <QDialog>

namespace Ui {
class Fred;
}

class Fred : public QDialog
{
    Q_OBJECT

public:
    explicit Fred(QWidget *parent = nullptr);
    ~Fred();

private slots:
    void on_pushButton_clicked();
    void on_pushButtonwebSite_clicked();

private:
    Ui::Fred *ui;
};

#endif // FRED_H
