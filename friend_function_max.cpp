#include<iostream>
using namespace std;
class demo
{
    public:
        int a, b, c;
        void input()
        {
            cout << "\nEnter a 1st value : ";
            cin >> a;
            cout << "Enter a 2nd value : ";
            cin >> b;
            cout << "Enter a 3rd value : ";
            cin >> c;
        }
        friend void max(demo m);
};

void max(demo m)
{
    if (m.a>m.b)
    {
            cout << "\nThe maximum value is : " << m.a << endl;
    }
    else if(m.b>m.c)
    {
            cout << "\nThe maximum value is : " << m.b << endl;
    }
     else if(m.c>m.a)
    {
            cout << "\nThe maximum value is : " << m.c << endl;
    }
    
}
int main()
{
    demo m;
    m.input();
    max(m);

    return 0;
}