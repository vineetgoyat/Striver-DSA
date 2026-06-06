// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> bubbleSort(vector<int>& num) {
    int swapp;
    int n = num.size();
    for(int i=n-1; i>=0; i--){
        swapp=0;
        for(int j=0; j<=i-1; j++){
            if(num[j]>num[j+1]){
                swap(num[j],num[j+1]);
                swapp=1;
            }
        }
        if(swapp==0) break;
        
    }
        
        
    return num;
        
    }
};


int main() {

    Solution obj;
    vector<int> result = {7 ,9 ,6 ,2 ,4};
    obj.bubbleSort(result);

    for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
    }
}   