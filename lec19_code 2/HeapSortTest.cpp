
#include <vector>
#include <functional>
#include <array>
#include <cassert>
#include <iostream>
#include <random>
#include "HeapSort.h"

using namespace std;

/* Driver code */
int main()
{
    // randomly generated data
    std::random_device random_device;
    std::mt19937 mt(random_device());
    std::uniform_int_distribution<int> distribution(-100, 100);

    std::array<int, 2> vector_sizes = {{5, 10}};
    std::vector<int> temp;

    for (auto size : vector_sizes)
    {
        for (int i = 0; i < size; ++i)
        {
            temp.push_back(distribution(mt));
        }

        cout << "Unsorted vector:" << endl;
        for (auto num : temp)
            cout << num << " ";

        cout << "\nSorted vector:" << endl;
        heapsort(temp);
        for (auto num : temp)
            cout << num << " ";

        cout << endl << endl;
    }
    return 0;
}