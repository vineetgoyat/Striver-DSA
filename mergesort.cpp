// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
     void merge(vector<int>& arr, int left, int mid, int right){
        vector<int> temp;
        int low=left, high=mid+1;
        


     }




    void mergesort(vector<int>& arr,int left, int right){
        if(left >=right)return;

        int mid = (left +right )/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1,right);
        merge(arr, left, mid, right);
    }
};


int main() {

    Solution obj;
    vector<int> result = {7 ,9 ,6 ,2 ,4};
    obj.mergesort(result);

    for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
    }
}   