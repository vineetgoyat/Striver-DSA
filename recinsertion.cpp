// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void recinsort(vector<int>& arr) {
        
        for(int i=1;i<arr.size();i++){
            int key=arr[i];
            int j=i-1;
            while(j>=0 && key<arr[j]){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    return;
        
    }
    
};


int main() {

    Solution obj;
    vector<int> result = {7 ,9 ,6 ,2 ,4};
    obj.recinsort(result);

    for ( int x : result) { cout << x << " "; }
}   