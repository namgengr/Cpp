#include "mainwindow.h"

#include <QApplication>

/*
 * Name: Tom Roberts
 * Subject: Add form widgets to tabs dynamically
 * Date: 09/24/21
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
