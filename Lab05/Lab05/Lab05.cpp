#include <iostream>
#include <string>
using namespace std;

// ฟังก์ชันคำนวณพื้นที่วงกลม
double calculateCircleArea(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}
// ฟังก์ชันคำนวณพื้นที่สี่เหลี่ยม
double calculateRectangleArea(double width, double height)
{
    return width * height;
}
// ฟังก์ชันรับค่าความกว้างและความยาว
void inputAndCalculateRectangleArea()
{
    double width, height;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    double area = calculateRectangleArea(width, height);
    cout << "The area of the rectangle is " << area << endl;
}
// ฟังก์ชันรับค่ารัศมี แล้วแสดงผลพื้นที่วงกลม
void inputAndCalculateCircleArea()
{
    double radius;
    cout << "Enter the radius : ";
    cin >> radius;
    double area = calculateCircleArea(radius);
    cout << "The area of the circle with radius " << radius << " is " << area << endl;
}
int main()
{
    inputAndCalculateCircleArea();
    inputAndCalculateRectangleArea();
    return 0;
}
