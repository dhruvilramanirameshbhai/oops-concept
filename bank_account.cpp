#include<iostream>
using namespace std;
class bank
{
public:
    string name;
    string ac_type;
    long long unsigned int ac_number;
    int balance;

    void assign()
    {
        cout << "Enter Your Name : " << endl;
        getline(cin, name);

        cout << "Enter Account Type\n -> 1.SAVING ACCOUNT : \n -> 2.CURRANT ACCOUNT : \n -> 3.FIX ACCOUNT : " << endl;
        getline(cin, ac_type);


        cout << "Enter Account Number : " << endl;
        cin >> ac_number;

        cout << "Balance Amount in the Account : " << endl;
        cin >> balance;
    }
    void deposit()
    {
        int dp;
        cout << "Enter the amount to deposit : " << endl;
        cin >> dp;
        balance = balance + dp;
        cout << "AMOUNT DEPOSITE SUCCESFULLY" << endl;
        cout << "NEW BALANCE IS : " << balance << endl;
    }
    void withdraw()
    {
        int dp;
        cout << "Enter amount to withdraw : ";
        cin >> dp;
        if (dp <= balance)
        {
            balance = balance - dp;
            cout << "AMOUNT WITHDRAW SUCCESFULLY" << endl;
            cout << "REMAINING BALANCE IS : " << balance << endl;
        }
        else
        {
            exit(0);
        }
    }
    void display()
    {
        cout << "YOUR NAME IS : " << name << endl;

        cout << "YOUR ACCOUNT TYPE IS : " << ac_type << endl;

        cout << "YOUR ACCOUNT NUMBER IS : " << ac_number << endl;
        
        cout << "YOUR ACCOUNT BALANCE IS : " << balance << endl;

    }
};
int main()
{
    int i;
    bank obj1;
    obj1.assign();
    cout << " 1. YOUR INFORMATION" << endl
         << " 2. DEPOSIT" << endl
         << " 3. WITHDRAW" << endl
         << "\n Enter 0 to Exit" << endl
         << " Enter your choice : ";
    do
    {
        cin >> i;
        if (i == 1)
        {
            obj1.display();
        }
        else if (i == 2)
        {
            obj1.deposit();
        }
        else if (i == 3)
        {
            obj1.withdraw();
        }
    } while (i >= 1 && i <= 3);

    return 0;
}