#include <iostream>
using namespace std;

int box_volume(int length =1, int width = 1, int heigth =1);

int main() {

    // no arguments-use default value for all arguments
    cout << "the default box volume is : " << box_volume() << endl;

    // specify length, default width and height
    cout << "the volume of box with length 10 (with = 1 , heigth = 1) is : " << box_volume(10) << endl;

    // specify length and width values, default lenth and heigth
    cout << "the volume of box with width = 5 (length = 1, heigth = 1) is : " << box_volume(10, 5) << endl;

    // specify all paramters
    cout << "the volume of box with all parameters is : " << box_volume(10, 5, 2) << endl;

    return 0;
}

int box_volume(int length, int width, int heigth) 
{
    return length * width * heigth;
}
