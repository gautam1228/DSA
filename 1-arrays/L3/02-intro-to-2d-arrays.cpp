# include <iostream>
# include <vector>
using namespace std;

int main () {

    // Declaration using no STL
    int arr[3][2];
    
    int arr1[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int arr2[3][3] = {
        {1, 2}
    }; // Un-assigned values are initialized to 0

    // Declaration using STL
    vector<vector<int>>(4, vector<int>(3, 0)); // Initializes a 2D Array with 4 rows and 3 columns with all elements initialized with 0

    // Printing a 2D array
    cout << "Printing an incomplete 2D Array:"<< endl;
    for (int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr2[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}