#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void update_grade();



private slots:
    void on_hw_slider_valueChanged(int value);

    void on_hw_slider_2_valueChanged(int value);

    void on_hw_slider_3_valueChanged(int value);

    void on_hw_slider_4_valueChanged(int value);

    void on_hw_slider_5_valueChanged(int value);

    void on_hw_slider_6_valueChanged(int value);

    void on_hw_slider_7_valueChanged(int value);

    void on_hw_slider_8_valueChanged(int value);

    void on_midterm_slider_valueChanged(int value);

    void on_midterm_slider_2_valueChanged(int value);

    void on_final_slider_valueChanged(int value);

    void on_course_option_currentIndexChanged(int index);

    void on_schema_a_clicked();

    void on_schema_b_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
