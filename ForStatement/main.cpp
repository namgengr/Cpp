#include <QCoreApplication>
#include <QDebug>

/*
 * Name: Tom Roberts
 * Subject: the for statement
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 13-14
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int sum = 0;
    // sum values 1 through 10 inclusive
    for (int val = 1; val <= 10; ++val) {
        // note: since our body is one line then we can
        // omit the curly braces if desired
        sum += val; // equivalent to sum = sum + val
    }
    qDebug() << "Sum of 1 to 10 inclusive is" << sum;

    return a.exec();
}
