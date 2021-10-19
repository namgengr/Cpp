#include <QCoreApplication>
#include <iostream>
#include <string>

/*
 * Name: Tom Roberts
 * Subject: String Character Processing
 * Reference: C++ primer 5th Ed. Lippman et al. pp 91-94
 */

using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // using range based for loop to write characters to the terminal
    string str("some string");
    for (auto c : str)
        cout << c;
    cout << endl << endl;

    // count the number of punctuations
    string s("Hello World!!!!");
    // punct_cnt has the same type that s.size() returns
    decltype (s.size()) punct_cnt = 0;
    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    cout << punct_cnt
         << " Punctuation characters in "
         << s << endl << endl;

    return a.exec();
}
