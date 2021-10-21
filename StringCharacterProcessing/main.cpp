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
         << s << endl;

    cout << endl;
    s = " Hello W0rld! ";
    decltype (s.size()) alnum_cnt = 0;
    for (auto c : s) {
        if (!isalnum(c)) {
            cout << "non-alpha numeric character at position index "
                << alnum_cnt << " in " << s << endl;
        }
        ++alnum_cnt;
    }

    cout << endl;
    decltype (s.size()) digit_cnt = 0;
    for (auto c : s) {
        if (isdigit(c))
            cout << "digit character at position index "
                << digit_cnt << " in " << s << endl;
        ++digit_cnt;
    }

    cout << endl;
    decltype (s.size()) letter_cnt = 0;
    for (auto c : s) {
        if (isalpha(c))
            ++letter_cnt;
    }
    cout << letter_cnt << " letter characters in "
         << s << endl;

    cout << endl;
    decltype (s.size()) space_cnt = 0;
    for (auto c : s) {
        if (isspace(c))
            cout << "whitespace at position index "
                << space_cnt << " in " << s << endl;
        ++space_cnt;
    }

    return a.exec();
}
