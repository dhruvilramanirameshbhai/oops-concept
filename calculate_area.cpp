#include<iostream>
using namespace std;

float area(float);
int area(int, int);
float area(float, float);

int main()
{
    int l, b;
    float r, bs, ht;

    cout << "\n\tCIRCLE";
    cout << "\nEnter radius of circle : ";
    cin >> r;
    cout << "\nAREA OF CIRCLE IS : " << area(r) << endl;

    cout << "\n\tRECTANGLE";
    cout << "\nEnter length of rectangle : ";
    cin >> l;
    cout << "Enter breadth of rectangle : ";
    cin >> b;
    cout << "\nAREA OF RECTANGLE IS : " << area(l, b) << endl;

    cout << "\n\tTRIANGLE";
    cout << "\nEnter base of triangle : ";
    cin >> bs;
    cout << "Enter height of triangle : ";
    cin >> ht;
    cout << "\nAREA OF TRIANGLE IS : " << area(bs, ht) << endl;
}

float area(float r)
{
    return (3.14 * r * r);
}

int area(int l,int b)
{
    return (l * b);
}

float area(float bs,float ht)
{
    return ((bs * ht) / 2);
}