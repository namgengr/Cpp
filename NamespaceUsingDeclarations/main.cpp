#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: Namespace using Declarations
 * Reference: C++ primer 5th Ed. Lippman et al. pp 82-83
 */

// the scope operator is :: and to the left of the scope operator
// is the namespace. A using delaration allows the use of the
// namespace name without qualifiying with a namespace prefix
using std::cin;
using std::cout; using std::endl;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // note the namespace is not needed here for cout, cin and endl
    cout << "Enter two numbers:" << endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2
         << " is " << v1 + v2 << endl;
    return a.exec();
}
