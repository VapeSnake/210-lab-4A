// COMSC-210|210-lab-4A|Noel Mier-Luna
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>   // For random number generation
#include <iomanip> // For table formatting

using namespace std;

const int MIN_VALUE = 25;
const int MAX_VALUE = 50;
const int TABLE_WIDTH = 10; // Constant values for easy adjustments to the table formatting

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

    for (int i = 0; i < n; i++)
    {
        Color tempColor = {rand() % 256, rand() % 256, rand() % 256}; // Random RGB values between 0 and 255
        colorVector[i] = tempColor;                                   // Initializes current index of vector to temp Color object
    }
    cout << left << setw(TABLE_WIDTH) << "Color #" << setw(TABLE_WIDTH) << "Red" << setw(TABLE_WIDTH) << "Green"
         << setw(TABLE_WIDTH) << "Blue" << endl;
    cout << left << setw(TABLE_WIDTH) << "------" << setw(TABLE_WIDTH) << "------" << setw(TABLE_WIDTH) << "------"
         << setw(TABLE_WIDTH) << "------" << endl; // Table headers
    for (int i = 0; i < colorVector.size(); i++)
    {
        cout << left << setw(TABLE_WIDTH) << i + 1 << setw(TABLE_WIDTH) << colorVector[i].red << setw(TABLE_WIDTH)
             << colorVector[i].green << setw(TABLE_WIDTH) << colorVector[i].blue << endl; // Output each color's RGB values in a formatted table
    }
    return 0;
}