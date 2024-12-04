#include "mainwindow.h"
#include <QApplication>
#include <QUuid>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(800, 600);
    w.setWindowTitle("Smart sprinkler");
    w.show();
    return a.exec();
}
