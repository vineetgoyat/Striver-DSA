#include<iostream>
using namespace std;   

class Student{
    public:
    string name;
    int age;
    int rollNumber;
    void printInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
    }
};
int main(){
    Student s1;
    s1.name = "Vineet";
    s1.age = 21;
    s1.rollNumber = 101;

    s1.printInfo();
}