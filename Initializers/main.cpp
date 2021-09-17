#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: Initializers
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 42-44
 */

std::string global_string;
int global_int;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double price = 109.99, discount = price * 0.10;
    std::cout << "price = " << price << ", discount = " << discount;
    std::cout << '\n';

    // different ways to initialize a variable
    int booksSold = 1;
    std::cout << "books sold = " << booksSold << '\n';

    int cardsSold = {2};
    std::cout << "cards sold = " << cardsSold << '\n';

    int cdsSold = (3);
    std::cout << "cds sold = " << cdsSold << '\n';

    long double ld = 3.1415926536;
    // braces are referred to list initialization
    //int a{ld}, b = {ld}; // results in an error
    int c(ld), b = ld;
    std::cout << "ld = " << ld << '\n';
    std::cout << "int c(ld) = " << c << '\n';
    std::cout << "for int b = ld, b = " << b << '\n';

    double wage = 9999.99;
    double salary = wage = 10999.99; // both are assigned to 10999.99
    std::cout << "wage = " << wage << '\n';
    std::cout << "salary = " << salary << '\n';

    // strings outside functions are initialized to empty
    // integers or floating points are initialized to zero
    std::cout << "global_string = " << global_string << '\n';
    std::cout << "global_int = " << global_int << '\n';

    // strings, integers or floats not initialized in functions
    // are undefined.
    int j;
    std::string str;
    std::cout << "j = " << j << '\n';
    std::cout << "str = " << str << '\n';

    return a.exec();
}
