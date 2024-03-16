#include<iostream>
using namespace std;
class calculater
{
    int a,b;
    public:
    calculater()
    {
        cout << "\nEnter a 1st value : ";
        cin >> a;
        cout << "Enter a 2nd value : ";
        cin >> b;
    }
    
    void display()
    {
        cout << "\nThe Addition is: " << a + b << endl;
        cout << "The Subtraction is: " << a - b << endl;
        cout << "The Multiplication is: " << a * b << endl;
        cout << "The Division is: " << a / b << endl;
    }
};
int main()
{
    calculater obj;
    obj.display();
    return 0;
}
