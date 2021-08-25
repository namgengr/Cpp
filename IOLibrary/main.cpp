#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "the sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    std::cout << "the product of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;
    std::cout << "the difference of " << v1 << " and " << v2
              << " is " << v1 - v2 << std::endl;

    // using separate statements to print each operand
    std::cout << "the sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;

    // If we don't need an event loop so we can comment out
    // the following line. This will allow pressing the return
    // key to end the program.
    return a.exec();
}
