// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
     void merge(vector<int>& arr, int low, int mid, int high) {
    
        vector<int> temp;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right])
                temp.push_back(arr[left++]);
            else
                temp.push_back(arr[right++]);
        }

        while (left <= mid)
            temp.push_back(arr[left++]);

        while (right <= high)
            temp.push_back(arr[right++]);

        for (int i = low; i <= high; i++)
            arr[i] = temp[i - low];
    }


    void mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);

        mergeSort(arr, mid + 1, high);


        merge(arr, low, mid, high);
    }
};


int main() {

    Solution obj;
    vector<int> result = {7 ,9 ,6 ,2 ,4};
    obj.mergeSort(result, 0, (int)result.size() - 1);

    for (int i = 0; i < (int)result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << '\n';
    return 0;
}   