# include <iostream>
# include <vector>

using namespace std;

// Include-Exclude Pattern
int maxRobbery(vector<int> arr, int index) {
    
    if(index >= arr.size()) {
        return 0;
    }

    int include_current_house = arr[index] + maxRobbery(arr, index + 2);
    int exclude_current_house = maxRobbery(arr, index + 1);

    return max(include_current_house, exclude_current_house);
}

int main() {

    vector<int> arr = {2, 7, 9, 3, 1};

    vector<int> ans;

    cout << "Total Money robbed : " << maxRobbery(arr, 0) << endl;

    return 0;
}