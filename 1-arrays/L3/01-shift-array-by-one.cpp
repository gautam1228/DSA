#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Reverse Without STL
void reverseArray(vector<int> &arr, int begin, int end){
    int temp;
    end--;
    while(begin < end){
        temp = arr[begin];
        arr[begin] = arr[end];
        arr[end] = temp;
        begin ++, end--;
    }
}

void rotateArray( vector<int> &arr, int k){
    int n = arr.size();
    if(k >= n) k %= n;

    // Solution with O(1) space complexity & O(n) Time complexity ( Without STL )
    reverseArray(arr, 0, k-1);
    reverseArray(arr, k-1, n);
    reverseArray(arr, 0, n);
    
    // Solution with O(1) space complexity & O(n) Time complexity ( With STL )
    // reverse(arr.begin(), arr.begin() + k - 1);
    // reverse(arr.begin() + k - 1, arr.end());
    // reverse(arr.begin(), arr.end());

}


int main() {

    vector<int> arr = {1, 3, 5, 2, 4, 9, 7};
    int n = arr.size();

    cout << "Original Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Rotating the array
    int k = 4;
    rotateArray(arr, k);

    cout << k << " times shifted Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}