#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {1, 2, 3, 8, 4, 6, 8, 4, 3, 1, 2};

    int n = arr.size();
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        ans ^= arr[i];
    }

    cout << "Unique element: " << ans << endl;

    return 0;
}