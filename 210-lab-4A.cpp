// COMSC-210|210-lab-4A|Noel Mier-Luna
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>   // For random number generation
#include <iomanip> // For table formatting

using namespace std;

const int MIN_VALUE = 25;
const int MAX_VALUE = 50;

struct Color
{
    int red;
    int green; // All values NOT initialized
    int blue;
};

int main()
{
    srand(static_cast<unsigned int>(time(nullptr))); // Seeds the random number generator
    Color color1 = {255, 0, 0};
    int n = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE; // Random number between MIN_VALUE and MAX_VALUE
    vector<Color> colorVector(n);

    cout << colorVector.size() << endl; // Output the size of the vector
    cout << n << endl;
    for (int i = 0; i < n; i++)
    {
        Color tempColor = {rand() % 256, rand() % 256, rand() % 256}; // Random RGB values between 0 and 255
        colorVector.push_back(tempColor);                             // Push struct object into vector
        cout << " Color " << i + 1 << ": (" << colorVector[i].red << ", " << colorVector[i].green << ", "
             << colorVector[i].blue << ")" << endl; // Output RGB values of current color
    }
    cout << left << setw(10) << "Color #" << setw(10) << "Red" << setw(10) << "Green" << setw(10) << "Blue" << endl;
    // Table headers
    for (int i = 0; i < colorVector.size(); i++)
    {
        cout << left << setw(10) << i + 1 << setw(10) << colorVector[i].red << setw(10)
             << colorVector[i].green << setw(10) << colorVector[i].blue << endl;
    }
    return 0;
}