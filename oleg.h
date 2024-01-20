#ifndef OLEG_H
#define OLEG_H

#include <QDialog>

namespace Ui {
class Oleg;
}

class Oleg : public QDialog
{
    Q_OBJECT

public:
    explicit Oleg(QWidget *parent = nullptr);
    ~Oleg();

private:
    Ui::Oleg *ui;
};

#endif // OLEG_H
