// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int min=nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if (nums[i] <= nums[j]) continue;
                else {
                    int temp;
                    temp=nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    return nums;
        
    }
};


int main() {

    Solution obj;
    vector<int> result = {5 ,4 ,4 ,1 ,1};
    obj.selectionSort(result);

    for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
    }
}   