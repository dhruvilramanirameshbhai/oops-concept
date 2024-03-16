#include <iostream>
using namespace std;
template<class T>
void swapme(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}
int main()
{
	int a, b;
	cout<<"Enter value for A : ";
	cin>>a;
    cout<<"Enter value for B : ";
	cin>>b;
	swapme(a, b);
	cout<<"\nAfter swap A = "<< a << endl;
    cout << "After swap B = " << b << endl;
	return 0;
}