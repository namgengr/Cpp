#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: Pointers
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 52-56
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*
     * A pointer is a compount type that points to another type.
     * A pointer is an object and can be assigned and copied. Unlike
     * a reference, a pointer doesn't need to be initialized at the
     * time it is defined.
     */

    int *ip1, *ip2;  // both ip1 and ip2 are pointers to int
    double dp, *dp2; // dp2 is a pointer to double, dp is a double

    int  ival = 42;
    // int *p = ival; // cannot do this

    // a pointer holds the address of another object. The & defines the
    // address of ival. ival is not a reference
    int *q = &ival; // q holds the address if ival; p is a pointer to ival
    std::cout << "The value of which *q points to = " << *q << std::endl;

    double dval;
    double *pd = &dval; // ok, initializer is the address-of a double
    double *pd2 = pd;   // ok, initializer is a pointer to double

    //int *pi = pd; // error, types differ
    //pi = &dval;   // error, assigning address-of double to an int

    // uninitialized pointer values can give unexpected results
    std::cout << "The uninitialized value of dval = " << *pd << std::endl;

    // change pointer value through ival. Dereferencing a pointer yields the
    // object to which the pointer points. * is the dereference operator.
    ival = 22;
    std::cout << "The new value of *q = " << *q << std::endl; // *q = 22
    std::cout << "The address to which q points = " << q << std::endl;

    // change ival through pointer q. When we assign to *q, we are assigning
    // to the object which q points.
    *q = 0;
    std::cout << "The new value of ival = " << ival << std::endl;

    // symbols have multiple meanings...
    int i = 42;
    int &r = i; // & follows a type and is part of a declaration; r is a reference
    int *p;     // * follows a type and is part of a declaration; p is a pointer
    p = &i;     // & is used in an expression as the address-of operator
    *p = i;     // * is used in an expression an is the dereference operator
    int &r2 = *p; // & is part of the declaration, * is the dereference operator

    // ways to obtain a null pointer
    int *p1 = nullptr; // equivalent to int *p1 = 0;
    int *p2 = 0;
    int *p3 = NULL;    // equivalent to int *p3 = 0;

    // check to see if p1 is a null pointer
    if (p1 == nullptr)
        std::cout << "p1 is a null pointer" << std::endl;

    /* define a pointer only after the object to which it should point to
     * has been defined. If there is no object to bind to a pointer then
     * initialize the pointer to nullptr. Never leave pointers uninitialized.
     */

    // assignment and pointers
    int j = 42;
    int *pi = 0;    // pi is initialized but addresses no object
    int *pi2 = &j;  // pi2 is intialized to hold the address of j
    int *pi3;       // pi3 is uninitiialized
    pi3 = pi2;      // pi3 and pi2 address the same object j
    pi2 = 0;        // pi2 addresses no object

    if (pi == nullptr)
        std::cout << "pi is a null pointer" << std::endl;

    // note, assignment changes the left-hand operand
    ival = 11;
    pi = &ival; // value of pi is changed; pi now points to ival
    std::cout << "The new value of pi = " << *pi << std::endl; // *pi = 11

    *pi = 0;    // value in ival is changed; the value to which pi points to is changed
    std::cout << "The new value of ival = " << ival << std::endl; // ival = 0
    std::cout << "The value of pi = " << *pi << std::endl; // *pi = 0

    // pointers used in conditional statements
    ival = 1024;
    int *pi4 = 0;       // pi4 is a null pointer
    int *pi5 = &ival;   // pi5 holds the address of ival
    if (pi4 == nullptr)
        std::cout << "pi4 is a null pointer" << std::endl;
    if (pi5) {
        std::cout << "pi5 evaluates as true" << std::endl;
        std::cout << "*pi5 = " << *pi5 << std::endl;
    }

    // void* pointers - a void* pointer holds an address, but the type of the
    // object at that address is unknown
    double obj = 3.14, *pdbl = &obj; //pdbl is a pointer to double; obj is a double
    void *pv = &obj;    // ok void* can hold the address value of any data pointer type
    pv = pdbl;          // pv can hold a pointer to any type


    // Exercise 2.18
    // Write code to change the value of a pointer
    int k = 5;
    int *pk = &k;
    std::cout << "Excercise 2.18 part 1: *pk = " << *pk << std::endl;

    // write code to change the value to which the pointer points
    *pk = 10;
    std::cout << "Excercise 2.18 part 2: k = " << k << std::endl;
    std::cout << "Excercise 2.18 part 2: *pk = " << *pk << std::endl;

    // Exercise 2.20 What does the following program do?
    int s = 42;     // initialize s to 42
    int *ps = &s;   // pointer to int ps is initialized to hold the address of i
    *ps = *ps * *ps; // multiply 42*42 and change the value to which the pointer
                    // points (i.e. s = 42*42 = 1764 = *ps).
    std::cout << "Excercise 2.20: s = " << s << std::endl;
    std::cout << "Excercise 2.20: *ps = " << *ps << std::endl;

    // Exercise 2.21 Explain and indicate if illegal
    int t = 0;
    //double *dp = &t; // pointer to double dp is initialized to hold the address if t
                    // illegal - mixed types
    //int *ip = i; // illegal - cannot initialize a int* with type int
    int *u = &t; // pointer to int u is initialized to hold the address of t - legal

    // Exercise 2.22 Assuming v is a pointer to int, explain the following code
    //if (v) // if v is not null then the if statement will be true
    //if(*v) // dereferences v and if statement evaluates the pointed to value

    // Exercise 2.23 given a pointer v, can you determine whether v points to
    // a valid object? how? if not, why not?
    // Ans: you can check to see if the pointer is assigned to null. If a pointer
    // is uninitialized then you cannot determine if the object is valid.

    // Exercise 2.24 Why is the initialization of px legal but lpx illegal
    int x = 131;
    void *px = &x;  // valid - void* can hold the address of any data pointer type
    //long *lpx = &x; // error - mixing types

    return a.exec();
}
