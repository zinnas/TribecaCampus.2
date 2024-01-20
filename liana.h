#ifndef LIANA_H
#define LIANA_H

#include <QDialog>

namespace Ui {
class Liana;
}

class Liana : public QDialog
{
    Q_OBJECT

public:
    explicit Liana(QWidget *parent = nullptr);
    ~Liana();

private:
    Ui::Liana *ui;
};

#endif // LIANA_H
