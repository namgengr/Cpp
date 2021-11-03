#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include "math.h"

/*
 * Name: Tom Roberts
 * Subject: rounds a float value to a specified number of decimal places
 */

using std::cout, std::endl;

float roundoff(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout.precision(8);

    double val1 = 1.34756634;
    unsigned char prec1 = 4;
    cout << val1 << " rounded to " << (float)prec1
         << " decimal places is "
         << roundoff(val1, prec1) << endl; // 1.3476

    double val2 = 10.876322;
    unsigned char prec2 = 5;
    cout << val2 << " rounded to " << (float)prec2
         << " decimal places is "
         << roundoff(val2, prec2) << endl; // 10.87632

    return a.exec();
}
