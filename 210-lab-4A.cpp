// COMSC-210|210-lab-4A|Noel Mier-Luna
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime> // For random number generation

using namespace std;

int n =

    struct Color
{
    int red;
    int green;
    int blue;
};

int main()
{
    srand(static_cast<unsigned int>(time(nullptr))); // Seeds the random number generator

    Color color1 = {200, 300, 400};
    vector<Color> colorVector;
    colorVector.push_back(color1);
    cout << "Color 1 - Red: " << colorVector[0].red
         << ", Green: " << colorVector[0].green
         << ", Blue: " << colorVector[0].blue << endl;
    return 0;
}