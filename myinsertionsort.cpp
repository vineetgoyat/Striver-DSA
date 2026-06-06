// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> insertionSort(vector<int>& num) {
        for(int i=1; i<num.size(); i++){
            for(int j=i; j>0; j--){
                if(num[j-1]>num[j]){
                    swap(num[j],num[j-1]);
                    
                }
            }
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