#include <QCoreApplication>
#include <iostream>

/*
 * Name: Tom Roberts
 * Subject: the if statement
 * Reference: C++ Primer 5th Edition, Lippman et. al. pp 17-19
 *
 * Note: You have to signal an EOF (ctrl-Z after you enter in
 *      the numbers to tell the terminal app you are at the end. Or,
 *      just enter any non-integer number
 */

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // currVal is the number we're counting: we'll read new
    // values int val
    int currVal = 0, val = 0;
    // read first number (into currVal) and ensure that we
    // have data to process. If the read succeeds then the
    // condition is true.
    if (std::cin >> currVal)
    {
        int cnt = 1; // store the count for the current value
                     // we're processing
        // read following numbers (into val). If the read succeeds
        // (i.e. true) then we stay in the while loop
        while(std::cin >> val)
        {
            // read the remaining numbers
            if (val == currVal)
            {   // if the values are the same then add one to cnt
                ++cnt;
            }
            else
            {
                // otherwise print the count for the previous value
                std::cout << currVal << " occurs "
                          << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        // print the count for the last value in the file
        std::cout << currVal << " occurs "
                  << cnt << " times " << std::endl;
    }
    return a.exec();
}
