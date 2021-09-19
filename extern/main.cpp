#include <QCoreApplication>
#include "header.h"

// global_x needs to be defined somewhere, we
// define it in this source file
int global_x;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // set global_x
    global_x = 10;
    print_global_x();

    return a.exec();
}
