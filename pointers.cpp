#include<iostream>
using namespace std;        
int main(){
    int a=10;
    int *ptr = &a; //pointer variable which stores the address of a

    cout<<"the value of a is: "<<a<<endl;

    cout<<"the address of a is: "<<&a<<endl;

    cout<<"the value stored in ptr is: "<<ptr<<endl; //address of a

    cout<<"the value pointed by ptr is: "<<*ptr<<endl; //value of a

    *ptr = 20; //changing the value of a using pointer
    cout<<"the value of a after changing using pointer is: "<<a<<endl;

}