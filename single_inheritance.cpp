#include <iostream>
using namespace std;
class cricketer
{
public:
};
class batsman : public cricketer
{
public:
    int a, sum = 0, run;
    float avg_run;
    string performance;
    void inputdata()
    {
      cout << "Enter a number of batsman : ";
      cin >> a;
      for (int i = 1; i <= a; i++)
      {
        cout << "\nEnter run : ";
        cin >> run;
        {
            if (run <= 10)
            {
              cout << "POOR PERFORMANCE" << endl;
            }
            else if (run > 10 && run <= 55)
            {
              cout << "GOOD PERFORMANCE" << endl;
            }
            else if (run > 55 && run < 100)
            {
                cout << "EXECELLENT PERFORMANCE" << endl;
            }
        }
      sum = sum + run;
      }
    }
    void total_run()
    {
        cout << "\nTotal run is : " << sum << endl;
    }
    void avarage_run()
    {
        avg_run = (sum) / a;
        cout << "\nAvarage run is : " << avg_run << endl;
    }
};

int main()
{
    batsman obj1;
    obj1.inputdata();
    obj1.total_run();
    obj1.avarage_run();

    return 0;
}