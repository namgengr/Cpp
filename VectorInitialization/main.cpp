#include <QCoreApplication>
#include <vector>
#include <string>
#include <iostream>
#include "Sales_item.h"

/*
 * Name: Tom Roberts
 * Subject: vector initialization
 * Reference: C++ primer 5th Ed. Lippman et al. pp 96-100
 */

using std::vector;
using std::string;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<int> ivec;               // ivec holds objects of type int
    vector<Sales_item> Sales_vec;   // Sales_vec holds objects of type Sales_item
    vector<vector<string>> file;    // vector whose elements are vectors

    // initializing a vector
    vector<string> svec;        // default initialization, svec has no elements
    vector<int> ivctr;          // initially empty
    vector<int> ivctr2(ivec);   // copy elements of ivctr into ivctr2
    vector<int> ivctr3 = ivctr; // copy elements of ivctr into ivctr3
    //vector<string> svctr(ivctr2); // error: svctr holds strings, not ints

    // list initializing a vector
    vector<string> articles = {"a", "an", "the"};   // list initialization
    //vector<string> articles = ("a", "an", "the");   // error, cannot use parentheses

    // create a specified number of elements
    vector<int> ivctr4(10, -1);     // ten int elements, each initialized to -1
    vector<string> svctr(10, "hi!");    // ten strings, each element is "hi!"

    // value initialization
    vector<int> iv(10);     // ten int elements initialized to 0
    vector<string> sv(10);  // ten string elements initialized as empty
    //vector<int> vi = 10;    // error, must use direct initialization to supply a size

    // ways to initialize a vector
    vector<double> v1;      // default initialization, v1 is 0
    vector<double> v2(v1);  // v2 has a copy of each element in v1
    vector<double> v3 = v2; // equiv to v3(v2), v3 is a copy of the elements in v2
    vector<string> s1(4, "r");  // s1 has 4 elements with value "r"
    vector<int> i2(6);      // i2 has 6 elements initialized to zero
    vector<float> f1 = {1.2, 3.4, 5.6}; // f1 has 3 initializers and thus 3 elements
    vector<float> f2{1.2, 3.4, 5.6};    // equivalent to f1

    // list initializer or element count
    vector<int> vi1(10);    // vi1 has 10 elements with value 0
    vector<int> vi2{10};    // vi2 has 1 element with value 10
    vector<int> vi3(10, 1); // vi3 has 10 elements with value 1
    vector<int> vi4{10, 1}; // vi4 has 2 elements of values 10 and 1

    // () object construct
    // {} list initialize
    vector<string> s5{"Hi"};    // list initialize, the value withing braces must match the element type
    //vector<string> s6("Hi");    // error, cannot construct vector from string literal
    vector<string> s7{10};  // s7 has 10 elements each are empty
    vector<string> s8{10, "a"};  // s8 has 10 elements each initialized to "a"

    // Exercise 3.12
    vector<vector<int>> ivv;    // vector of vector, default initialized to 0
    //vector<string> svec = ivv;  // error, vector is redefined
    vector<string> svec2{10, "null"};   // vector of 10 strings initialized to "null"

    // Exercise 3.13, How many elements in each vector, what are the values?
    vector<int> vv3; // vector with zero elements
    vector<int> vv4(10);    // vector with 10 elements default initialized to 0
    vector<int> vv5(10, 42); // vector with 10 elements each initialized to 42
    vector<int> vv6{10};    // vector with 1 element initialized to 10
    vector<int> vv7{10, 42};    // vector with 2 elements initialized to 10 and 42
    vector<string> vv8{10}; // vector with 10 elements each initialized as empty
    vector<string> vv9{10, "Hi"};   // vector with 10 elements each initialized as "Hi"

    std::cout << vv9[9] << std::endl;

    return a.exec();
}
