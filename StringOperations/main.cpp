#include <QCoreApplication>
#include <iostream>
#include <string>

/*
 * Name: Tom Roberts
 * Subject: Operations on Strings
 * Reference: C++ primer 5th Ed. Lippman et al. pp 85-87
 */

using std::cin; using std::cout; using std::endl;
using std::string;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    string s;
    cout << "ignoring whitespaces: enter strings with whitespaces: " << endl;
    cin >> s;   // read a whitespace separated string into s
                // note: the read will terminate on the first whitespace
    cout << s << endl;  // write the string back out to the terminal
    cin.clear();
    fflush(stdin);

    // adding or concatenate strings
    cout << "\n";
    cout << "string concatenation" << endl;
    string s1 = "hello ";
    string s2 = "world!";
    cout << s1 + s2 << endl; // outputs 'hello world'

    // reading an unknown number of strings
    string word;
    cout << "\n";
    cout << "ignoring whitespaces: enter strings with whitespaces: " << endl;
    while (cin.good()) {
        if (cin.get() == '\n')  // get out of while loop if at the end
            break;
        cin >> word;
        cout << word << endl;   // write each word followed by a newline
    }
    cin.clear();
    fflush(stdin);

    // use getline to read an entire line
    cout << "\n";
    string line;
    cout << "using getline: enter a string with whitespaces: \n";
    while(getline(cin, line)){  // read a line at a time until end of file
        if (!line.length())
            break;  // occurs when user presses the <enter> key
        cout << line << endl;   // write each word followed by a newline
    }
    cin.clear();
    fflush(stdin);

    // string empty operation
    cout << "\n";
    string line2;
    cout << "string empty: enter a string with whitespaces: \n";
    while(getline(cin, line2)){  // read a line at a time until end of file
        if (!line2.empty()) {
            cout << line2 << endl;   // write each word followed by a newline
        }
        else {
            break;  // occurs when user presses the <enter> key
        }
    }
    cin.clear();
    fflush(stdin);

    // string size operation
    cout << "\n";
    string line3;
    cout << "string size: enter a string with > 20 chars: \n";
    while(getline(cin, line3)){  // read a line at a time until end of file
        if (line3.size() > 20) {
            cout << line3.size() << " characters" << endl;
        }
        else {
            cout << "number of characters is less than 20" << endl;
            break;  // occurs when user presses the <enter> key
        }
    }
    cin.clear();
    fflush(stdin);

    cout << "\nthe end";
    return a.exec();
}
