#ifndef BARBARA_H
#define BARBARA_H

#include <QDialog>

namespace Ui {
class Barbara;
}

class Barbara : public QDialog
{
    Q_OBJECT

public:
    explicit Barbara(QWidget *parent = nullptr);
    ~Barbara();

private:
    Ui::Barbara *ui;
};

#endif // BARBARA_H
