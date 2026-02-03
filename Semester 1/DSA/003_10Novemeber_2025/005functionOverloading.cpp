#include <iostream>
using namespace std;
// Funtion Overloading to demonstrate multiple functions with same name

int Area (int side) {
    // Area of square
    return side * side;
}

int Area (int length, int breadth) {
    // Area of triangle
    return (length * breadth) / 2;
}

double Area (double radius) {
    // Area of circle
    return 3.14 * radius * radius;
}
int Area ( int a, int b, int c){
    //Area of triangle based on side
    int s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int squareSide;
    int triangleLength, triangleBreadth;
    double circleRadius;
    int sideA, sideB, sideC;
    
    cout << "Enter the radius of the circle: ";
    cin >> circleRadius;
    cout << "Enter the side of the square: ";
    cin >> squareSide;
    cout << "Enter the length and breadth of the triangle: ";
    cin >> triangleLength >> triangleBreadth;
    
    cout << "Enter the three sides of the triangle: ";
    cin >> sideA >> sideB >> sideC;

    cout << "Area of Square: " << Area(squareSide) << endl;
    cout << "Area of Triangle: " << Area(triangleLength, triangleBreadth) << endl;
    cout << "Area of Circle: " << Area(circleRadius) << endl;
    cout << "Area of Triangle (using sides): " << Area(sideA, sideB, sideC) << endl;

    return 0;
}