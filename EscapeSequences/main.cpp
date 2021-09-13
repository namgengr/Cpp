#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: Escape Sequences
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 39-40
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // use a backslash to escap and escape character
    std::cout << "the newline escape sequence: \\n" << std::endl;
    std::cout << "skip a line between words dog and cat" << std::endl;
    std::cout << "dog\ncat\n" << std::endl;

    std::cout << "the bell sound escape sequence: \\a" << std::endl;
    std::cout << "\a" << std::endl;

    std::cout << "the horizontal tab escape sequence: \\t" << std::endl;
    std::cout << "\tHello World!\n" << std::endl;

    std::cout << "the vertical tab escape sequence: \\v" << std::endl;
    // prints box with question mark
    std::cout << "\\v gives: "<< "\v\n" << std::endl;

    std::cout << "the nondestructive backspace escape sequence: \\b" << std::endl;
    std::cout << "Hello Worl\\b\\bd gives: " << "Hello Worl\b\bd\n" << std::endl;

    std::cout << "the double quote escape sequence: \\\"" << std::endl;
    std::cout << "\"Hello World\"" << '\n' << std::endl;

    std::cout << "the backslash escape sequence: \\\\" << std::endl;
    std::cout << "This is an inline comment: \\\\" << '\n' << std::endl;

    std::cout << "the question mark escape sequence: \\?" << std::endl;
    std::cout << "Need an example here!" << '\n' << std::endl;

    std::cout << "the single quote escape sequence: \\'" << std::endl;
    std::cout << "\'Hello World\'" << '\n' << std::endl;

    std::cout << "the carriage return escape sequence: \\r" << std::endl;
    std::cout << "Need an example here!" << '\n' << std::endl;

    std::cout << "Hi \x4dO\115!\n"; // prints Hi MOM
    std::cout << "\115" << std::endl; // prints M

    return a.exec();
}
