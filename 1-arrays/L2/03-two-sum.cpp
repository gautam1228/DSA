#include <iostream>
using namespace std;

#include <vector>

int main() {

    // This is un-optimized code btw (So don't start screaming at me) (Will do optimized code in the further sections)

    int target = 7;
    // bool targetFound = false; // To stop the loop after finding the first pair

    vector<int> arr = {1, 4, 5, 6, 3, 2};

    int n = arr.size();

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout << "Target sum found using " << arr[i] << " and " << arr[j] << ". " <<  arr[i] << " + " << arr[j] << " = " << target << endl;
                // targetFound = true;
            }
        }
        // if(targetFound) break;
    }

    return 0;
}