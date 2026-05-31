#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "The age is:" << endl;
    cin >> age;
    if (age > 150 || age < 1)
    {
        cout << "Invalid age" << endl;
    }
    else if (age >= 18)
    {
        cout << "You can vote" << endl;
    }
    else
    {
        cout << "You cannot vote" << endl;
    }
    return 0;
}