#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: Character, integer and floating point literals
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 38-41
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int month = 9, day = 7;
    std::cout << "Month = " << month << ", Day = " << day;
    std::cout << '\n';

    // a preceeding zero specifies octal notation
    // month = 09 is not recognized as an octal and give an error
    month = 015, day = 017; // gives month=13 and day=15
    std::cout << "Month = " << month << ", Day = " << day;
    std::cout << '\n';

    int octalNum = 015;
    std::cout << "octal number 015 = " << octalNum;
    std::cout << '\n';

    int hexNum = 0xC; // hexidecimal notation
    std::cout << "hex number 0xC = " << hexNum;
    std::cout << '\n';

    // character literals are prefixed
    char str = 'a'; // character literal
    std::cout << "character literal 'a' = " << str;
    std::cout << '\n';

    str = L'a';
    std::cout << "wide character literal L'a' = " << str;
    std::cout << '\n';

    str = u8'a'; // can only contain a single character
    std::cout << "string literal u8'a' = " << str;
    std::cout << '\n';

    // integer and floating point literals are suffixed
    double num = 3.1415f;
    std::cout << "floating point literal 3.1415f = " << num;
    std::cout << '\n';

    int i = 99u;
    std::cout << "unsigned integer literal 99u = " << i;
    std::cout << '\n';

    i = 99UL;
    std::cout << "unsigned long integer literal 99UL = " << i;
    std::cout << '\n';

    num = 843L;
    std::cout << "long floating point literal 843L = " << num;

    return a.exec();
}
