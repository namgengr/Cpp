#include <QCoreApplication>
#include <iostream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int sum = 0, value = 0;
    // read until end of file, calculating the running total of
    // all values read
    // Note: You have to signal an EOF (ctrl-Z after you enter in
    // the numbers to tell the terminal app you are at the end. Or,
    // just enter any non-integer number
    std::cout << "Input some numbers." << std::endl;
    while(std::cin >> value)
    {
       sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;

    return a.exec();
}
