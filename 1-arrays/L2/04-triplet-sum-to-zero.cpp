#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

int main() {

    // Note: This is also very unoptimized code and can be written in a much better way
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){
        if (i > 0 && arr[i] == arr[i-1]){
            // This loop is so that if we are counting the same element twice then we skip over it.
            continue;
        }
        for(int j = i + 1; j < n; j++){
            if (j > i + 1 && arr[j] == arr[j-1]){
                continue;
            }
            for (int k = j + 1; k < n; k++){
                if (k > j + 1 && arr[k] == arr[k-1]){
                    continue;
                }
                int first = arr[i];
                int second = arr[j];
                int third = arr[k];
                int sum = first + second + third;
                if (sum == 0){
                    vector<int> temp;
                    temp.push_back(first);
                    temp.push_back(second);
                    temp.push_back(third);
                    ans.push_back(temp);
                }
            }
        }
    }

    cout << "[ ";
    for(int i = 0; i < ans.size(); i++){
        cout << "[ ";
        for(int j = 0; j < 3; j++){
            if (j == 2) cout << ans[i][j] <<" ";
            else cout << ans[i][j] << ", ";
        }
        if(i == ans.size() - 1) cout << " ]";
        else cout << " ], ";
    }
    cout << " ]" << endl;

    return 0;
}