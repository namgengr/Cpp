#include <QCoreApplication>
#include <iostream>
#include <string>

/*
 * Name: Tom Roberts
 * Subject: Operations on Strings, Part 2
 * Reference: C++ primer 5th Ed. Lippman et al. pp 89-90
 */

using std::cin; using std::cout; using std::endl;
using std::string;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // comparing strings
    string str = "Hello"; // str < phrase since shorter strings are less than longer ones
    string phrase = "Hello World";
    string slang = "Hiya";  // slang > str and slang > str since i > e

    // assignment for strings
    string st1(10, 'c'), st2; // st1="cccccccccc", st2 is empty string
    st1 = st2;  // both st1 and st2 are empty strings

    // adding strings
    string s1 = "hello, ", s2 = "world";
    string s3 = s1 + s2;    // s3 is "hello, world"
    cout << s3 << endl;
    s1 += s2; // s1 is "hello, world"
    cout << s1 << endl;

    // adding literals and strings
    string s4 = "hello", s5 = "world";
    string s6 = s4 + ", " + s5;
    cout << s6 << endl;

    // note: at least one operand to each + operator must be of string type
    string s7 = s1 + ", ";          // ok, adding a string and literal
    //string s8 = "hello" + ", ";   // error no string operand
    string s9 = s1 + ", " + "world";    // ok each + has a string operand
    string s10 = (s1 + ", ") + "world"; // groups the same as s9, ok

    // s10 above is the same as the following
    string tmp = s1 + ", ";     // ok, + has string operand
    string s11 = tmp + "world"; // ok, + has string operand

    //string s12 = ("hello" + ", ") + s5; // error, can't add string literals

    return a.exec();
}
