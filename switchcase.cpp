#include <iostream>

using namespace std;

int main() {
	int name;
    cout<<"Enter your UID:"<<endl;
    cin>>name;
    switch(name){
        case 17160:
            cout<<"I am V"<<endl;
            break;
        case 17163:
            cout<<"I am P"<<endl;
            break;
        case 17117:
        cout<<"I am #"<<endl;
        break;
        default:
        cout<<"I am an ahole"<<endl;
        break;

    }
	return 0;
}