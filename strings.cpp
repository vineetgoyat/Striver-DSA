#include<iostream>
#include<string>
using namespace std;
int main(){
    string name = "Vineet";
    
    cout<<"The Cool Name is : "<<name<<endl;

    cout<<"The length of the name is :"<<name.length()<<endl;

    cout<<"The name in uppercase is : "<<name[3]<<endl;

    cout<<"The name in lowercase is : "<<name[1]<<endl;

    cout<<"The name in reverse is : "<<name[5]<<endl;

    cout<<"The name is :"<<name.substr(1, 4)<<endl; 

    cout<<"The name is :"<<name.substr(0, 55)<<endl; //substr(starting index, length of the substring)
}