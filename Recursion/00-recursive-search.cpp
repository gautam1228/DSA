# include <iostream>
using namespace std;

// Recursive search
int recSearch(int arr[], int index, int size, int target){
    // Base case
    if (index >= size) {
        return -1;
    }

    // processing
    if(arr[index] == target) {
        return index;
    }

    return recSearch(arr, index + 1, size, target);
}

int main() {

    int arr[] = {30, 20, 50, 10, 40};
    
    int target = 30;
    int index = recSearch(arr, 0, 5, target);

    if (index >= 0) cout << "Index of " << target << " is : " << index << endl;
    else cout << target << " not found !" << endl;
    return 0;
}