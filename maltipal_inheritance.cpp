#include<iostream>
using namespace std;

class person
{
public:
int age;
string name;
};

class student:public person
{
    public:
    float per;
    void s()
    {
        cout<<"\nEnter a name of student : ";
        cin>>name;
        cout<<"Enter a age of student : ";
        cin>>age;
        cout<<"Enter a percentage : ";
        cin>>per;

        cout<<"\nStudent name is : "<<name<<endl;
        cout<<"Student age is : "<<age<<endl;
        cout<<"Student percentage is : "<<per<<endl;
}
};

class teacher:public person
{
    public:
    int sel;
    void t()
    {   
        cout<<"\nEnter a name of teacher : ";
        cin>>name;
        cout<<"Enter a age of teacher : ";
        cin>>age;
        cout<<"Enter a selery : ";
        cin>>sel;
        cout<<"\nTeacher name is : "<<name<<endl;
        cout<<"Teacher age is : "<<age<<endl;
        cout<<"Teacher selery is : "<<sel<<endl;
    }
};

    int main()
    {
        int ch;
        teacher obj;
        student obj1;   
    do
    {
        cout << "\nEnter- 1. TEACHER" << endl
             << "Enter- 2. STUDENT" << endl
             <<"\n\nEnter '0' To Exit"
             << "\nENTER CHOICE : ";

        cin >> ch;
		switch (ch)
		{
        case 1:
        obj.t();
        break;

        case 2:
        obj1.s();
        break;   
        }
        
    } while (ch >= 1 && ch <= 4);

    obj.t();
    obj1.s();
  return 0;
}