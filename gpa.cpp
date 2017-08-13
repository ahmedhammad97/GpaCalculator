#include "gpa.h"
#include "ui_gpa.h"





Gpa::Gpa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Gpa)
{
    ui->setupUi(this);
    float hconvertor(int x);

}

Gpa::~Gpa()
{
    delete ui;
}


void Gpa::on_h1_valueChanged(int value)
{   int val1 = ui->h1->value();
    ui->c1->setCurrentIndex(11-val1);
    Gpa::calculate();}

void Gpa::on_h2_valueChanged(int value)
{   int val2 = ui->h2->value();
    ui->c2->setCurrentIndex(11-val2);
    Gpa::calculate();}

void Gpa::on_h3_valueChanged(int value)
{   int val3 = ui->h3->value();
    ui->c3->setCurrentIndex(11-val3);
    Gpa::calculate();}

void Gpa::on_h4_valueChanged(int value)
{   int val4 = ui->h4->value();
    ui->c4->setCurrentIndex(11-val4);
    Gpa::calculate();}

void Gpa::on_h5_valueChanged(int value)
{   int val5 = ui->h5->value();
    ui->c5->setCurrentIndex(11-val5);
    Gpa::calculate();}

void Gpa::on_h6_valueChanged(int value)
{   int val6 = ui->h6->value();
    ui->c6->setCurrentIndex(11-val6);
    Gpa::calculate();}

void Gpa::on_h7_valueChanged(int value)
{   int val7 = ui->h7->value();
    ui->c7->setCurrentIndex(11-val7);
    Gpa::calculate();}

void Gpa::on_h8_valueChanged(int value)
{   int val8 = ui->h8->value();
    ui->c8->setCurrentIndex(11-val8);
    Gpa::calculate();}

void Gpa::on_h9_valueChanged(int value)
{   int val9 = ui->h9->value();
    ui->c9->setCurrentIndex(11-val9);
    Gpa::calculate();}

void Gpa::on_h10_valueChanged(int value)
{   int val10 = ui->h10->value();
    ui->c10->setCurrentIndex(11-val10);
    Gpa::calculate();}


float Gpa::hconvertor(int x){
    switch(x){
    case 11: return 4.00; break;
    case 10: return 4.00; break;
    case 9: return 3.70;  break;
    case 8: return 3.30; break;
    case 7: return 3.00; break;
    case 6: return 2.70; break;
    case 5: return 2.30; break;
    case 4: return 2.00; break;
    case 3: return 1.70; break;
    case 2: return 1.30; break;
    case 1: return 1.00; break;
    default: return 0.00;
    };

};

void Gpa::calculate(){
    int s1= ui->s1->value();
    int s2= ui->s2->value();
    int s3= ui->s3->value();
    int s4= ui->s4->value();
    int s5= ui->s5->value();
    int s6= ui->s6->value();
    int s7= ui->s7->value();
    int s8= ui->s8->value();
    int s9= ui->s9->value();
    int s10= ui->s10->value();

    int h1= ui->h1->value();
    int h2= ui->h2->value();
    int h3= ui->h3->value();
    int h4= ui->h4->value();
    int h5= ui->h5->value();
    int h6= ui->h6->value();
    int h7= ui->h7->value();
    int h8= ui->h8->value();
    int h9= ui->h9->value();
    int h10= ui->h10->value();

    float f1 = Gpa::hconvertor(h1);
    float f2= Gpa::hconvertor(h2);
    float f3 = Gpa::hconvertor(h3);
    float f4 = Gpa::hconvertor(h4);
    float f5 = Gpa::hconvertor(h5);
    float f6 = Gpa::hconvertor(h6);
    float f7 = Gpa::hconvertor(h7);
    float f8 = Gpa::hconvertor(h8);
    float f9 = Gpa::hconvertor(h9);
    float f10 = Gpa::hconvertor(h10);

    float GPA = ui->GPA->value();
    int hourSum = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;



    float finalGPA = ((s1*f1)+(s2*f2)+(s3*f3)+(s4*f4)+(s5*f5)+(s6*f6)+(s7*f7)+(s8*f8)+(s9*f9)+(s10*f10))/hourSum;







    ui->GPA->setValue(finalGPA);


};
