#include<iostream>
using namespace std;

int add(int a, int b){
    int c;
    c= a+b;
    return c;
}
int main(){
    int a,b;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    int sum= add(a,b);
    cout<<"The sum of the two numbers is: "<<sum<<endl;
    return 0;
}
