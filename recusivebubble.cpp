// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void rebubble(vector<int>& arr) {
        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
    void rebubblee(vector<int>& arr) {
        int i,j;
        if(i>j)
         return;
        rebubble(arr);
        
    }
};




int main() {

    Solution obj;
    vector<int> result = {7 ,9 ,6 ,2 ,4};
    obj.rebubble(result);

    for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
    }
} 