#include <iostream>
#include <array>
using namespace std;

int main()
{
    const size_t arraySize{4}; // specifies size of array
    array<int, arraySize> a{10, 20, 30, 40};
    int total{0};

    // sum contents of array a
    for (size_t i{0}; i < a.size(); ++i)
    {
        total += a[i];
    }
    
    cout << "Total of array elements: " << total << endl;
}