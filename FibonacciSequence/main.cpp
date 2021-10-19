#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: The Fibonacci Sequence
 *
 *      | 0, n=0
 * fn = | 1, n=1
 *      | fn-1 + fn-2, n>=2
 */

using std::cout; using std::endl;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const int MAX_FIB = 500;
    int fnminus2 = 0;
    int fnminus1 = 1;
    cout << fnminus2 << endl;     // n=0
    cout << fnminus1 << endl;     // n=1
    int fn = fnminus1 + fnminus2; // n=2
    while (fn < MAX_FIB)
    {
        cout << fn << endl;
        fnminus2 = fnminus1;
        fnminus1 = fn;
        fn = fnminus1 + fnminus2;
    }

    return a.exec();
}
