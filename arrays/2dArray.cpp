#include<iostream>
using namespace std;
int main(){
    int arr2d[2][3]= {
        {2,4,1},
        {3,5,7}
    };

    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout<<"the elements at index : "<<i<<" and "<<j<< " are: " <<arr2d[i][j]<<endl;
        }
    }

}