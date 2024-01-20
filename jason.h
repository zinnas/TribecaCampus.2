#ifndef JASON_H
#define JASON_H

#include <QDialog>

namespace Ui {
class Jason;
}

class Jason : public QDialog
{
    Q_OBJECT

public:
    explicit Jason(QWidget *parent = nullptr);
    ~Jason();

private:
    Ui::Jason *ui;
};

#endif // JASON_H
