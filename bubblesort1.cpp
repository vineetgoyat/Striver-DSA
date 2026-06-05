// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            
            for(int j=i+1; j<nums.size(); ++j){
                if(nums[i]<nums[j]) continue;
                else{
                int temp;
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j=i;
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