#include <QCoreApplication>
#include <iostream>
#include <string>

/*
 * Name: Tom Roberts
 * Subject: String Character Processing
 * Reference: C++ primer 5th Ed. Lippman et al. pp 91-94
 */

using std::string;
using std::cin;
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

    // identify the positions of non-alpha numeric characters
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

    // identify the positions of digit characters
    decltype (s.size()) digit_cnt = 0;
    for (auto c : s) {
        if (isdigit(c))
            cout << "digit character at position index "
                << digit_cnt << " in " << s << endl;
        ++digit_cnt;
    }
    cout << endl;

    // identify the positions of letters
    decltype (s.size()) letter_cnt = 0;
    for (auto c : s) {
        if (isalpha(c))
            ++letter_cnt;
    }
    cout << letter_cnt << " letter characters in "
         << s << endl;
    cout << endl;

    // identify the positions of whitespaces
    decltype (s.size()) space_cnt = 0;
    for (auto c : s) {
        if (isspace(c))
            cout << "whitespace at position index "
                << space_cnt << " in " << s << endl;
        ++space_cnt;
    }
    cout << endl;

    // change all characters to uppercase
    for (auto &c : s) // note c is a reference
        c = toupper(c);
    cout << s << endl;
    cout << endl;

    // capitalize first letter in string
    s = "some string";
    if (!s.empty())
        s[0] = toupper(s[0]);   // outputs "Some string"
    cout << s << endl;
    cout << endl;

    // use a subscript for iteration, here we process
    // each character until we hit a whitespace
    for (decltype(s.size()) index = 0;
         index != s.size() && !isspace(s[index]); index++)
        s[index] = toupper(s[index]);
    cout << s << endl;
    cout << endl;

    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15 separated"
         << " by spaces. Hit ctrl-Z and ENTER when finished: "
         << endl;
    string result; // will hold the hex string result
    string::size_type n;    // hold numbers from the input, n is unsigned
    while(cin >> n)
        if (n < hexdigits.size())   // ignore invalid input
            result += hexdigits[n]; // fetch the indicated he digit
    cout << "Your hex number is: " << result << endl;

    // Exersize 3.6
    // Use a range for to change all the charaters to X
    s = "Hello World!";
    for (auto &c : s)
        if (isalpha(c) || ispunct(c))
            c = char('X');
    cout << s << endl; // outputs "XXXXX XXXXXX"

    // Exersize 3.7
    // Predict what would happen if you define the loop control variable
    // as type char
    s = "Hello World!";
    for (char &c : s)
        if (isalpha(c) || ispunct(c))
            c = char('X');
    cout << s << endl; // outputs "XXXXX XXXXXX"

    // Exersize 3.8
    // Rewrite the program in 3.6 using an while and then a traditional
    // for loop. Which one would you prefer?
    s = "Hello World!";
    string::size_type j = 0;
    while (j < s.size()) {
        if (isalpha(s[j]) || ispunct(s[j]))
            s[j] = char('X');
        j++;
    }
    cout << s << endl; // outputs "XXXXX XXXXXX"

    s = "Hello World!";
    for (decltype(s.size()) index = 0;
         index < s.size(); index++)
        if (!isspace(s[index]))
                s[index] = char('X');
    cout << s << endl;
    cout << endl;

    // Exersize 3.9
    // What does the following program do. Is it valid or not?
    string r;
    cout << r[0] << endl;
    // the program prints an empty string. Before using r, r should
    // be checked if it is empty or not.

    // Exercise 3.10
    // Write a program that reads a string with punctuation marks
    // and writes what was read without punctuation.
    r = "Hello World!!!!";
    for (auto &c : r)
        if (ispunct(c))
            c = (char) 0;
    cout << "With punctuation removed...";
    cout << r << endl;  // writes "Hello World"

    // Exercise 3.11
    // Is the following range for legal? If so, what is the type
    // of c?
    const string t = "Keep Out!";
    for (auto &c : t) { /* ... */ }
    // this range is legal but c cannot be changed since string
    // t is a constant.


    return a.exec();
}
