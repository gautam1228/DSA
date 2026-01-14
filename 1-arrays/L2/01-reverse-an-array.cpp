#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1, 4, 6, 8, 3, 2};

    int n = arr.size();
    int i = 0;
    int j = n - 1;

    while(i < j){
        swap(arr[i], arr[j]);
        i++, j--;
    }

    // Printing the reversed array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}