// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void rec_insertion_sort(vector<int> &arr, int i, int n){
        if(i==n) return;

        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        rec_insertion_sort(arr, i+1, n);
    }
};


int main() {

    Solution obj;
    vector<int> result = {7, 9, 6, 2, 4};
    obj.rec_insertion_sort(result, 1, result.size());

    for (int x : result) cout << x << " ";
    cout << '\n';
}
