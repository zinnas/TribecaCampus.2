#ifndef FITERMAN5F_H
#define FITERMAN5F_H

#include <QDialog>

namespace Ui {
class Fiterman5f;
}

class Fiterman5f : public QDialog
{
    Q_OBJECT

public:
    explicit Fiterman5f(QWidget *parent = nullptr);
    ~Fiterman5f();

private slots:
    void on_pushButtonFred_clicked();

    void on_pushButtonLiana_clicked();

    void on_pushButtonStephen_clicked();

    void on_pushButtonAllan_clicked();

    void on_pushButtonMark_clicked();

    void on_pushButtonBarbara_clicked();

    void on_pushButtonOleg_clicked();

    void on_pushButtonJason_clicked();

    void on_pushButtonKe_clicked();

    void on_pushButton_clicked();

private:
    Ui::Fiterman5f *ui;
};

#endif // FITERMAN5F_H
