#ifndef ALLAN_H
#define ALLAN_H

#include <QDialog>

namespace Ui {
class Allan;
}

class Allan : public QDialog
{
    Q_OBJECT

public:
    explicit Allan(QWidget *parent = nullptr);
    ~Allan();

private:
    Ui::Allan *ui;
};

#endif // ALLAN_H
