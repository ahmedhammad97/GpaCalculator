#ifndef GPA_H
#define GPA_H

#include <QMainWindow>

namespace Ui {
class Gpa;
}

class Gpa : public QMainWindow
{
    Q_OBJECT

public:
    explicit Gpa(QWidget *parent = 0);
    ~Gpa();

private slots:
    void on_h1_valueChanged(int value);
    void on_h2_valueChanged(int value);
    void on_h3_valueChanged(int value);
    void on_h4_valueChanged(int value);
    void on_h5_valueChanged(int value);
    void on_h6_valueChanged(int value);
    void on_h7_valueChanged(int value);
    void on_h8_valueChanged(int value);
    void on_h9_valueChanged(int value);
    void on_h10_valueChanged(int value);
    void calculate();
    float hconvertor(int x);

private:
    Ui::Gpa *ui;
};

#endif // GPA_H
