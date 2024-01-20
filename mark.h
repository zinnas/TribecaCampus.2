#ifndef MARK_H
#define MARK_H

#include <QDialog>

namespace Ui {
class Mark;
}

class Mark : public QDialog
{
    Q_OBJECT

public:
    explicit Mark(QWidget *parent = nullptr);
    ~Mark();

private:
    Ui::Mark *ui;
};

#endif // MARK_H
