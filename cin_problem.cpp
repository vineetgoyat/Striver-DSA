//Complete the function printNumber which takes an integer input from the user and prints it on the screen.
//Input(user gives value): 7
//Output: 7

#include<iostream>
using namespace std;

class Solution {
    public:
    void printNumber() {
        int x;
        cin >> x;
        cout << x;
    }

};
int main(){
    Solution obj;
    obj.printNumber();
    return 0;
}