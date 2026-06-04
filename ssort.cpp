// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int min=nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if (nums[j] <= nums[i]) continue;
                else {
                    int temp;
                    temp=nums[i];
                    nums[i] = nums[j];
                    nums[j] = nums[i];
                }
            }
        }
    return nums;
        
    }
};


int main() {

    Solution obj;
    vector<int> result = {7, 4, 5};
    obj.selectionSort(result);

    for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
    }
}   