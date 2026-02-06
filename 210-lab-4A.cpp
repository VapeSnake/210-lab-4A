#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Color
{
    int red;
    int green;
    int blue;
};

int main()
{
    Color color1 = {200, 300, 400};
    vector<Color> colorVector;
    colorVector.push_back(color1);
    cout << "Color 1 - Red: " << colorVector[0].red
         << ", Green: " << colorVector[0].green
         << ", Blue: " << colorVector[0].blue << endl;
    return 0;
}