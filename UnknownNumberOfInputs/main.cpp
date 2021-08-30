#include <QCoreApplication>
#include <iostream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int sum = 0, value = 0;
    // read until end of file, calculating the running total of
    // all values read
    // Note: you have to enter in a non-numeric character at the end
    // to get this program to work!
    std::cout << "Input some numbers." << std::endl;
    while(std::cin >> value)
    {
       sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;

    return a.exec();
}
