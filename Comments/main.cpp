#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: Comments
 * Reference: C++ Primer 5th Edition, Lippman et. al.
 *
 * The multiline comment style is to add an asterik to
 * each new line within the comment. Qt automatically
 * adds the asterik after pressing the return key.
 *
 * You cannot nest comment pairs. Anything after the
 * ending comment pair is considered source code.
 */

///*
// * However, everying inside single line comments are
// * ignored even nested pairs.
// */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // prompt user to enter two numbers
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0; // variable to hold the input we read
    std::cin >> v1 >> v2; // read input
    std::cout << "the sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;

    // Exercise 1.8
    std::cout << "/*" << std::endl; // legal
    std::cout << "*/" << std::endl; // legal
    //std::cout << /* "*/" */ << std::endl; // illegal
    std::cout << /* "*/" /* "/*" */ << std::endl; // legal

    return a.exec();
}
