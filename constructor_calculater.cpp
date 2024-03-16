#include <iostream>
#include <math.h>
using namespace std;

class Calculator
{

public:
float a,b;
public:

	void result()
	{
		cout << "\n~ Enter 1st Number : ";
		cin >> a;
		cout << "~ Enter 2nd Number : ";
		cin >> b;
	}

	float addition()
	{
		return a + b;
	}

	float  subtraction()
	{
		return a - b;
	}

	float multiplication()
	{
		return a * b;
	}
	
	float division ()
	{
		if (b == 0)
		{
			cout << "\nDIVISION BY ZERO" <<endl;
		}
		else
		{
			return a / b;
		}
	}

};

int main()
{
	int ch;
	Calculator c;
	cout << "\nEnter 1 = To Addition 2 Numbers" <<
			"\nEnter 2 = To Subtraction 2 Numbers" <<
			"\nEnter 3 = To Multiplication 2 Numbers" <<
			"\nEnter 4 = To Division 2 Numbers" <<
			"\n\nEnter '0' To Exit";
		
	do
	{
		cout << "\n\n>> ENTER CHOICE : ";
		cin >> ch;
		switch (ch)
		{
		case 1:
			c.result();
			cout << "\n-> ADDITION IS : " << c.addition() << endl;
			break;

		case 2:
			c.result();
            cout << "\n-> SUBTRACTION IS : " <<c.subtraction() << endl;
			break;

		case 3:
			c.result(); 
			cout << "\n-> MULTIPLICATION IS : " <<c.multiplication() << endl;
			break;

		case 4:
			c.result();
			cout << "\n-> DIVISION IS : " <<c.division() << endl;
			break;
		}
		
	} while (ch >= 1 && ch <= 4);
	
	return 0;
}
