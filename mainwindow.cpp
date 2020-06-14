#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    update_grade();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_grade(){
    //see which class
    int cls = ui->course_option->currentIndex(); //0 for 10b, 1 for 10c

    //get all hw scores
    int hw1 = ui->hw_spin->value();
    int hw2 = ui->hw_spin_2->value();
    int hw3 = ui->hw_spin_3->value();
    int hw4 = ui->hw_spin_4->value();
    int hw5 = ui->hw_spin_5->value();
    int hw6 = ui->hw_spin_6->value();
    int hw7 = ui->hw_spin_7->value();
    int hw8 = ui->hw_spin_8->value();

    //get midterm scores
    int mid1 = ui->midterm_spin->value();
    int mid2 = ui->midterm_spin_2->value();

    //get final score
    int final = ui->final_spin->value();

    //get grading scheme
    bool sch_a = ui->schema_a->isChecked();

    double hw_avg = double(hw1+hw2+hw3+hw4+hw5+hw6+hw7+hw8)/double(8);

    double grade = 0;

    //if class is Pic 10b
    if(cls == 0){
        if(sch_a){ //if using grading scheme A
            grade = 0.25*hw_avg + 0.2*mid1 + 0.2*mid2 + 0.35*final;
        }
        else{ //if using grading scheme B
            //identify max midterm score
            int max_mid = mid1;
            if(mid2 > max_mid){
                max_mid = mid2;
            }
            grade = 0.25*hw_avg + 0.3*max_mid + 0.44*final;
        }
    }
    //************made up random grading scheme for 10C************
    else{ //if class is Pic 10c
        if(sch_a){ //if using grading scheme A
            grade = 0.1*hw_avg + 0.175*mid1 + 0.175*mid2 + 0.55*final;
        }
        else{ //if using grading scheme B
            //identify max midterm score
            int max_mid = mid1;
            if(mid2 > max_mid){
                max_mid = mid2;
            }
            grade = 0.1*hw_avg + 0.35*max_mid + 0.55*final;
        }
    }

    QString str_grade = QString::fromStdString(std::to_string(grade));
    ui->score->setText(str_grade);
}


