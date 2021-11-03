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

float roundoff(float value, unsigned char prec)
{
  float pow_10 = pow(10.0f, (float)prec);
  return round(value * pow_10) / pow_10;
}

const std::vector<double> eSeries(const int m)
{
    // Reference: https://en.wikipedia.org/wiki/E_series_of_preferred_numbers
    std::vector<double> series;
    unsigned char precision = 1;
    if (m>=48) precision = 2;
    for(int n = 0; n < m; n++)
        series.push_back(roundoff(pow(pow(10, n), 1.0/m), precision));
    return series;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // E6, E12 and E24 series truncate to one decimal place
    std::cout << "E6 Standard values, 20%:" << std::endl;
    const std::vector<double> E6 = eSeries(6);
    for(size_t n = 0; n < E6.size(); n++)
        std::cout << E6[n] << std::endl;

    std::cout << "\nE12 Standard values, 10%:" << std::endl;
    const std::vector<double> E12 = eSeries(12);
    for(size_t n = 0; n < E12.size(); n++)
        std::cout << E12[n] << std::endl;

    std::cout << "\nE48 Standard values, 2%:" << std::endl;
    const std::vector<double> E48 = eSeries(48);
    for(size_t n = 0; n < E48.size(); n++)
        //std::cout << std::setprecision(2) << E12[n] << std::endl;
        std::cout << E48[n] << std::endl;

    return a.exec();
}
