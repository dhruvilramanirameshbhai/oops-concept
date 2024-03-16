#include<iostream>
using namespace std;

class cubic
{
   public:
    inline float multiplication(float x,float y){return x*y;}

    inline float cube(float x){return x*x*x;}
};

int main()
{
    cubic obj;
    float value1,value2;

    cout<<"\nENTER 1st VALUE : ";
    cin>>value1;

    cout<<"ENTER 2nd VALUE : ";
    cin>>value2;

    cout<<"\nMULTIPLICATION VALUE IS : "<<obj.multiplication(value1,value2)<<endl;

    cout<<"\nCUBE OF 1st VALUE IS : " <<obj.cube(value1)<<endl;
    cout<<"CUBE OF 2nd VALUE IS : " <<obj.cube(value2)<<endl;

    return 0;
}