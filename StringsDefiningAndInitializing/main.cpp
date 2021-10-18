#include <QCoreApplication>
#include <string>

/*
 * Name: Tom Roberts
 * Subject: Defining and Initializing Strings
 * Reference: C++ primer 5th Ed. Lippman et al. pp 84-85
 */

using std::string;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string s1;          // default or copy initialization, empty string
    string s2 = s1;     // copy initialization, s2 is a copy of s1
    string s3 = "hiya"; // copy initialization, s3 is copy of a string literal
    string s4(10, 'c'); // direct initialization, s4 is "cccccccccc"
                        // s4 is 10 copies of character c
    string s5 = string(5, 'c'); // copy initialization using a temporary object
    string s6(s2);      // direct initialization, s6 is an empty string

    return a.exec();
}
