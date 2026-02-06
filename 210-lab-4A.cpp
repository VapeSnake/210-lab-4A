// COMSC-210|210-lab-4A|Noel Mier-Luna
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> // For random number generation

using namespace std;

const int MIN_VALUE = 25;
const int MAX_VALUE = 50;

    struct Color
{
    int red;
    int green;
    int blue;
};

int main()
{
    srand(static_cast<unsigned int>(time(nullptr))); // Seeds the random number generator
    int n = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE; // Random number between MIN_VALUE and MAX_VALUE
    vector<Color> colorVector(n);

    cout << colorVector.size() << endl; // Output the size of the vector
    cout << n << endl;
    return 0;
}