#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setText();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_checkBox_stateChanged(int state);
    void on_checkBox_2_stateChanged(int state);
    void generateRandomNumber();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    bool isAuto = false;
};
#endif // MAINWINDOW_H
