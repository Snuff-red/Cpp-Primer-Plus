#include <cmath>
#include <iostream>

int main() {
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet , of your home: " << endl;
    cin >> area;

    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet to the side" << endl;
}