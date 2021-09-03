#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using std::vector;

/*
 * Name: Tom Roberts
 * Subject: Round a float to the nearest decimal
 */

// Function to control # of decimal places to be output for x
double showDecimals(const double& num, const int& numDecimals) {
    int i=num;
    double fractional=num-i;
    double mult=pow(10,numDecimals);
    double newNum=fractional*mult;
    double r=round(newNum);

    return static_cast<double>(i)+(1.0/mult)*r;
}


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    std::cout << std::fixed;

    vector<double> dfloats {17.55999, 1.500000, 0.000000, -4.59010, 2.50000, 3.11100};
    for (auto &item : dfloats) {
        std::cout << std::setprecision(5) << item << " rounded to 2-decimal places = "
                    << showDecimals(item,2) << std::endl;
    }

    std::cout << '\n';

    double dfloat {42.19283};
    for (int i = 1; i <= 5; i++) {
        std::cout << std::setprecision(5) << dfloat << " rounded to "
                << i << "-decimal places = "
                << showDecimals(dfloat,i) << std::endl;
    }

    return a.exec();
}
