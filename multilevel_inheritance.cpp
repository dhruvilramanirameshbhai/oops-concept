#include<iostream>
using namespace std;
class student
{
    public:
        int rollnumber;  
    void input()
    {
        cout << "Enter Rollnumber : ";
        cin >>rollnumber;
    }
};
class test : public student
{
    public:
        float e_marks;
        float g_marks;
        float m_marks;
        float s_marks;
        float h_marks;
    void mark()
    {
        cout << "\nEnter English marks : ";
        cin >> e_marks;
        cout << "Enter Gujrati marks : ";
        cin >> g_marks;
        cout << "Enter Maths marks : ";
        cin >> m_marks;
        cout << "Enter Science marks : ";
        cin >> s_marks;
        cout << "Enter Hindi marks : ";
        cin >> h_marks;
    }

};
class result: public test
{
        public:
        float t_marks;
        float res;
    void total()
    {
        t_marks = e_marks + g_marks + m_marks + s_marks + h_marks;
        res = (t_marks) / 5;
    }
    void display()
    {
        cout << "\nYOUR ROLLNUMBER IS : " << rollnumber << endl;
        cout << "\nYOUR ENGLISH MARKS IS : " << e_marks << endl;
        cout << "YOUR GUJRATI MARKS IS : " << g_marks << endl;
        cout << "YOUR MATHS MARKS IS : " << m_marks << endl;
        cout << "YOUR SCIENCE MARKS IS : " << s_marks << endl;
        cout << "YOUR HINDI MARKS IS : " << h_marks << endl;
        cout << "\nALL SUBJECT TOTAL MARKS IS  : " << t_marks << endl;
        cout << "\nYOUR RESULT IS  : " << res << " %"<<endl;

    }
};
int main()
{
    result m;
    m.input();
    m.mark();
    m.total(),
    m.display();
    return 0;
}
