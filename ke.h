#ifndef KE_H
#define KE_H

#include <QDialog>

namespace Ui {
class Ke;
}

class Ke : public QDialog
{
    Q_OBJECT

public:
    explicit Ke(QWidget *parent = nullptr);
    ~Ke();

private:
    Ui::Ke *ui;
};

#endif // KE_H
