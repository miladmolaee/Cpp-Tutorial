#include <iostream>
#include <iomanip>
#include <cstdlib> // contains prototypes for functions srand and rand
using namespace std;

int main()
{
    unsigned int seed{0}; // stores the seed entered by the user
    
    cout << "Enter seed: ";
    cin >> seed;
    
    srand(seed); // seed random number generator
    
    // loop 10 times
    for (unsigned int counter{1}; counter <= 10; ++counter)
    {
        // pick random number from 1 to 6 and output it
        cout << setw(10) << (1 + rand() % 6);
        
        // if counter is divisible by 5, start a new line of output
        if (counter % 5 == 0)
        {
            cout << endl;
        }
    }
}