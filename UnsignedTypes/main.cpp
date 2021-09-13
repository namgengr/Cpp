#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: expressions using unsigned types
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 36-38
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    unsigned u = 10;
    int i = -42;

    std::cout << "i = " << i << std::endl;
    std::cout << "u = " << u << std::endl;
    std::cout << "i + i = " << i + i << std::endl; // prints 84

    // i is converted to unsigned and wraps around!
    std::cout << "i + u = " << i + u << std::endl; // prints 4294967264

    // the following loop will not work since when u is
    // decremented from 0 wrapping will occur
    //for (unsigned u = 10; u >= 0; --u)
    //    std::cout << u << std::endl;

    // use a while loop to decrement before (not after) printing the value.
    std::cout << "write the numbers from 10 to 0" << std::endl;
    u = 11;
    while(u>0){
        u--;
        std::cout << u << std::endl;
    }

    return a.exec();
}
