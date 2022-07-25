#include <iostream>
#include <iomanip>
#include <cstdlib> // contains function prototype for rand
using namespace std;

int main()
{
    unsigned int frequency1{0}; // count of 1s rolled
    unsigned int frequency2{0}; // count of 2s rolled
    unsigned int frequency3{0}; // count of 3s rolled
    unsigned int frequency4{0}; // count of 4s rolled
    unsigned int frequency5{0}; // count of 5s rolled
    unsigned int frequency6{0}; // count of 6s rolled
    int face;      
                 // stores each roll of the die
    // summarize results of 60,000,000 rolls of a die
    for (unsigned int roll{1}; roll <= 60000000; ++roll)
    {
        face = 1 + rand() % 6; // random number from 1 to 6

        // determine roll value 1-6 and increment appropriate counter
        switch (face)
        {
        case 1:
            ++frequency1; // increment the 1s counter
            break;
        case 2:
            ++frequency2; // increment the 2s counter
            break;
        case 3:
            ++frequency3; // increment the 3s counter
            break;
        case 4:
            ++frequency4; // increment the 4s counter
            break;
        case 5:
            ++frequency5; // increment the 5s counter
            break;
        case 6:
            ++frequency6; // increment the 6s counter
            break;
        default: // invalid value
            cout << "Program should never get here!";
        }
    }

    cout << "Face" << setw(13) << "Frequency" << endl; // output headers
    cout << "1" << setw(13) << frequency1
         << "\n2" << setw(13) << frequency2
         << "\n3" << setw(13) << frequency3
         << "\n4" << setw(13) << frequency4
         << "\n5" << setw(13) << frequency5
         << "\n6" << setw(13) << frequency6 << endl;
}