#include <QCoreApplication>
#include <iostream>
#include <string>

/*
 * Name: Tom Roberts
 * Subject: For Statement, Range Based
 * Reference: C++ primer 5th Ed. Lippman et al. pp 91
 */

using std::cout;
using std::string;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string str = "some short string";

    // writes each character out to the terminal
    for (auto c : str)
        cout << c;

    return a.exec();
}
