#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: References
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 50-51
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int ival = 1024;

    // a reference defineds an alternative type for an object. A
    // reference type refers to another type. A reference is not an
    // object and is just another name for an already existing object.
    int &refVal = ival; // refVal refers to ival

    //int &refVal2; // error: a reference must be initialized
    std::cout << "Declaring int &refVal2; produces an error since a "
                "reference must be initialized" << std::endl;
    std::cout << std::endl;

    std::cout << "The value of refVal (where ival = 1024 and &refVal = ival) equals "
          << refVal << std::endl;
    std::cout << "The address of ival (i.e. &ival) equals " << &ival << std::endl;
    std::cout << "The address of refVal (i.e. &refVal) equals " << &refVal << std::endl;
    std::cout << std::endl;

    refVal = 2; // assign 2 to the object (i.e. ival) to which the reference is bound
    std::cout << "If we assign 2 to refVal (i.e. refVal = 2) then ival = " << ival << std::endl;
    std::cout << std::endl;

    int &refVal2 = refVal; // initialize a reference with a reference, this is ok
    std::cout << "The value of refVal2 (where &refVal2 = refVal) equals " << refVal2 << std::endl;
    std::cout << std::endl;

    int i = refVal; // initialize i to the same value as ival, this is ok
    std::cout << "The value of i (where int i = refVal) equals " << i << std::endl;
    std::cout << std::endl;

    i = 5;
    std::cout << "If we assign 5 to i (i.e. i = 5) then i = " << i << std::endl;
    std::cout << "The value of refVal = " << refVal << std::endl;
    std::cout << "The value of refVal2 = " << refVal2 << std::endl;
    std::cout << "The value of ival = " << ival << std::endl;
    std::cout << std::endl;

    //int &refVal3 = 10; // error: an intitializer must be an object
    std::cout << "Assigning &refVal3 = 10 produces an error since an "
                "intitializer must be an object" << std::endl;
    std::cout << std::endl;

    double dval = 3.14;
    //int &refVal4 = dval; // error; initializer must be an int object
    std::cout << "double dval = 3.14" << dval << std::endl;
    std::cout << "Declaring int &refVal4 = dval; produces an error since "
                "types do not match" << std::endl;
    std::cout << std::endl;

    int k = 0, &r1 = k; double d = 0, &r2 = d;
    r2 = 3.14159; // assign 3.14159 to the object to which the refrerence r2 is bound (i.e. d),
                  // d is assigned 3.14159 and r2 is 3.14159
    r2 = r1;      // assign r1 (i.e k) to the object which the reference r2 is bound (i.e. d),
                  // d is assigned 0 and r2 is 0
    k = r2;       // assign reference r2 to k, r2 is 0 so k is now 0
    r1 = d;       // assign d to the object to which the reference r1 is bound (i.e. k), k is assigned 0
    std::cout << "Exercise 2.16: k = " <<  k << ", r1 = " << r1 << ", d = " << d << ", r2 = " << r2 << std::endl;

    // Exercise 2.17:
    int j, &rj = j;
    j = 5, rj = 10;
    std::cout << "Exercise 2.17: j = " <<  j << ", rj = " << rj << std::endl;

    return a.exec();
}
