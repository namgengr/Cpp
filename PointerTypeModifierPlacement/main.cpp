#include <QCoreApplication>

/*
 * Name: Tom Roberts
 * Subject: Pointers
 * Reference: C++ Primer 5th Edition, Lippman et. al. pg. 57
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
     * there are two common styles used to define multiple
     * variables with pointer or reference types. Sometimes
     * this leads to confusion.
     */

    // in the following declaration, base type is int and not int*
    int* p1, p2; // p1 is a pointer to int, p2 is an int

    // the following style emphasizes the variable has the
    // indicated compound type
    int *p3, *p4; // both p3 and p4 are pointers to int

    // the second style places the type modifier with the
    // compound type but defines only one variable per statement
    int* p5;
    int* p6;

    // note: there is no correct convention. Use one and stick to it.

    return a.exec();
}
