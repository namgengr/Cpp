#include <QCoreApplication>
#include <QDebug>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: the While statement
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 11-13
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int sum = 0, val = 0;
    // keep executing the while statement as long
    // as val is less than or equal to 10
    while (val <= 10)
    {
        sum += val; // assigns sum + val to sum
        ++val;      // add one to val
    }
    qDebug() << "Sum of 1 to 10 inclusive is" << sum;

    // Exercise 1.10
    val = 10;
    while (val >= 0)
    {
        qDebug() << val;
        --val;  // subtract one from val
    }

    // Exercise 1.11
    std::cout << "Enter two numbers" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    while (v1<=v2)
    {
        qDebug() << v1;
        ++v1;
    }

    return a.exec();
}
