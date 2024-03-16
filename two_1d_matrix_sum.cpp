#include <iostream>
using namespace std;

int main()
 {
    int size;
    cout << "Enter the size of the matrices : ";
    cin >> size;

    int m1[size];
    int m2[size];
    int result[size];

    cout << "\nEnter the Elements of 1st matrix : ";
    for (int i = 0; i < size; i++) 
    {
        cin >> m1[i];
    }

    cout << "\nEnter the Elements of 2nd matrix : ";
    for (int i = 0; i < size; i++)
    {
        cin >> m2[i];
    }

    for (int i = 0; i < size; i++) 
    {
        result[i] = m1[i] + m2[i];
    }

    cout << "\nThe sum of the matrices is : ";

    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
