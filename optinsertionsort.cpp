// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> insertionSort(vector<int>& num) {
    int n= num.size();
    for(int i=1; i<n; i++){
        int key= num[i];
        int j=i-1;
        while(j>=0 && num[j]>key){
            num[j+1]=num[j];
            j--;
        }
        num[j+1]=key;
    }
    
    
    return num;
        
    }
};


int main() {

    Solution obj;
    vector<int> result = {7 ,9 ,6 ,2 ,4};
    obj.insertionSort(result);

    for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
    }
}   