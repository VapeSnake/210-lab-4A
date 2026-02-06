#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    Color color1 = {140, 200, 255};
    cout << "Color 1 - Red: " << color1.red << ", Green: " << color1.green << ", Blue: " << color1.blue << endl;
    return 0;
}