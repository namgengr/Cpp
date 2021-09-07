#include <QCoreApplication>
#include <iostream>
#include "Sales_item.h"

/*
 * Name: Tom Roberts
 * Subject: using the Sales_item class
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 20-22
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Exercise 1.20 - Read a set of book transactions and
    // write them out to the standard input
    // use 0-123-12345-X 3 19.01 and 0-123-12345-X 1 17.50
    // as the data.

    // create the item Sales_item objects
    Sales_item item1, item2;

    // read in the book transactions to the item objects
    std::cin >> item1 >> item2;

    // read out the book transactions
    std::cout << "book #1: " << item1 << std::endl;
    std::cout << "book #2: " << item2 << std::endl;

    // Exercise 1.21 - Read two sales item objects having the
    // same ISBN and returns their sum
    std::cout << "The sum is: " <<item1 + item2 << std::endl;

    // Exercise 1.22 - Read several sales item objects having the
    // same ISBN and write the sum of all transactions read
    // Note: signal an EOF (ctrl-Z after you enter in
    // the numbers to tell the terminal app you are at the end. Or,
    // just enter any non-integer number
    int sum = 0;
    Sales_item item;
    std::cout << "\n" << std::endl;
    std::cout << "Input the transactions... " << std::endl;
    while(std::cin >> item)
    {
       sum += 1;
    }
    std::cout << "The number of transactions is: " << sum << std::endl;

    return a.exec();
}
