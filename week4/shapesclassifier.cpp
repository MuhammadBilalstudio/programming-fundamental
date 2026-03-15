#include<iostream>
#include<string>
#include<cmath> 
using namespace std;

int main() {
    string shape;
    cout << "Enter the type of figure (square, rectangle, circle, triangle): ";
    cin >> shape;

    if (shape == "square") {
        float side;
        cin >> side;
        cout << side * side << endl; 
    } 
    else if (shape == "rectangle") {
        float length, width;
        cin >> length >> width;
        cout << length * width << endl; 
    } 
    else if (shape == "circle") {
        float radius;
        cin >> radius;
       
        cout << 3.14159 * radius * radius << endl; 
    } 
    else if (shape == "triangle") {
        float base, height;
        cin >> base >> height;
        cout << 0.5 * base * height << endl; 
    }

    return 0;
}