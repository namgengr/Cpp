#include <QCoreApplication>
#include <iostream>
#include "Sales_item.h"

/*
 * Name: Tom Roberts
 * Subject: Member functions of a class
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 23-24
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* What is a member function? A member function is
     * is a function that is defined as part of a class. A
     * function is sometimes called a method.
     *
     * List all of the member functions of the sales_item class
     */

    // create the item Sales_item object
    Sales_item item1;

    // read in the book transaction to the item object
    // (ex. 0-123-12345-X 9, 25.96)
    std::cin >> item1;

    std::cout << "ISBN: " << item1.isbn() << '\n';
    std::cout << "Cost: " << item1.avg_price();

    return a.exec();
}
