#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> rebubble(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = 0; j < arr.size() - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        return arr;
    }

    vector<int> rebubblee(vector<int>& arr) {
        return rebubble(arr);
    }
};

int main() {
    Solution obj;
    vector<int> result = {7, 9, 6, 2, 4};

    result = obj.rebubblee(result);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}