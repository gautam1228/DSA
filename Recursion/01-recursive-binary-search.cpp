# include <iostream>
using namespace std;

int recBinarySearch(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1;
    }

    int mid = start + (end-start) / 2;
    
    if (arr[mid] == target) {
        return mid;
    }

    if(arr[mid] > target) {
        return recBinarySearch(arr, start, mid - 1, target);
    } else {
        return recBinarySearch(arr, mid + 1, end, target);
    }
}

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60 };

    int target = 50;
    
    int index = recBinarySearch(arr, 0, 5, target);
    
    if (index >= 0) cout << "Index of " << target << " is: " << index << endl;
    else cout << target << " not found !" << endl;

    return 0;
}