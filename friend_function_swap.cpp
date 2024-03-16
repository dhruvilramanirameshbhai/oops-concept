#include <iostream>
using namespace std;

class demo
{
	public:
		int a, b;
	void input()
	{
		cout << "\nEnter a 1st value : ";
		cin >> a;
		cout << "Enter a 2nd value : ";
		cin >> b;
	}
		friend void swap(demo obj);
};

void swap(demo obj)
{
    obj.a = obj.a + obj.b;
	obj.b = obj.a - obj.b;
	obj.a = obj.a - obj.b;

	cout << "\nAfter swapping 1st value is : " << obj.a << endl;
	cout << "After swapping 2st value is : " << obj.b << endl;

}

int main()
{
	demo obj;
	obj.input();
	swap(obj);
}
