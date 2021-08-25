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

    // we don't need an event loop so we can comment out the
    // following line. This will allow pressing the return
    // key to end the program.
    return a.exec();
}
