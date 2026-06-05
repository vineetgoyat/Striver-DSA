#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    vector<int>SelectionSort(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; i++){
            //i last second tak jayegi
            //or j last tak jayegi
            //or min ko bhi i se badal sakte hai 
            int min=nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]<=nums[j]) continue;
                else{
                int temp;
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                }
            
            }
        }
        return nums;
    }
};


int main(){
    Solution obj;
    vector<int> result ={5, 7, 2, 9, 4};
    obj.SelectionSort(result);
    
    for(int i=0; i<result.size(); i++){
        cout<< result[i] <<" ";
    }
}