// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            for(int j=0; j<nums.size()-i-1; j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    return nums;
        
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