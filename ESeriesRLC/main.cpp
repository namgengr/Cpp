#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include "math.h"

/*
 * Name: Tom Roberts
 * Subject: Derivation of preferred RLC standard values
 * Notes:   1. Use RoundToDecimalPlaces located in this same repository
 *              to truncate the eSeries values.
 *          2. E48 and E96 values truncate to two decimal places and
 *              all others truncate to one decimal place.
 */

const std::vector<double> eSeries(const int m)
{
    // Reference: https://en.wikipedia.org/wiki/E_series_of_preferred_numbers
    std::vector<double> series;
    for(int n = 0; n < m; n++)
        series.push_back(pow(pow(10, n), 1.0/m));
    return series;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // E6, E12 and E24 series truncate to one decimal place
    std::cout << "E6 Standard values, 20%:" << std::endl;
    const std::vector<double> E6 = eSeries(6);
    for(size_t n = 0; n < E6.size(); n++)
        std::cout << std::setprecision(2) << E6[n] << std::endl;

    std::cout << "\nE12 Standard values, 10%:" << std::endl;
    const std::vector<double> E12 = eSeries(12);
    for(size_t n = 0; n < E12.size(); n++)
        std::cout << std::setprecision(2) << E12[n] << std::endl;

    /* use the same routine to compute E24 (5%), E48 (2%) and
     * E96 (1%) standard values. E48 and E96 truncate to two
     * decimal places.
     */

    return a.exec();
}
