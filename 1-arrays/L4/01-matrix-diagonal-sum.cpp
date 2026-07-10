# include <iostream>
# include <vector>
using namespace std;

// Only valid for square matrices
int matrixDiagonalSum(vector<vector<int>> &matrix, int size) {
    if (!(size & 1)) {
        // Even case
        
        // D1 Sum
        int sum = 0;
        for(int i = 0; i < size; i++){
            sum += matrix[i][i];
        }

        // D2 Sum
        for(int i = 0; i < size; i++){
            sum += matrix[i][size - i - 1];
        }

        return sum;

    } else {
        // Odd case

        // D1 Sum
        int sum = 0;
        for(int i = 0; i < size; i++){
            sum += matrix[i][i];
        }

        // D2 Sum
        for(int i = 0; i < size; i++){
            sum += matrix[i][size - i - 1];
        }

        sum -= matrix[size/2][size/2];

        return sum;
    }
}

int main() {

    vector<vector<int>> blueie = {
        {5, 1, 8, 6},
        {1, 2, 2, 8},
        {7, 1, 2, 4},
        {6, 9, 9, 9}
    };

    vector<vector<int>> pinkie = {
        {5, 1, 8},
        {1, 2, 2},
        {7, 1, 2}
    };

    int blueie_size = blueie.size();
    int bluei_diagonal_sum = matrixDiagonalSum(blueie, blueie_size);
    
    int pinkie_size = pinkie.size();
    int pinkie_diagonal_sum = matrixDiagonalSum(pinkie, pinkie_size);
    
    // Printing juicy peach and long cucumber
    cout << "Juicy Peach :" << endl;
    for(int i = 0; i < blueie_size; i++){
        for(int j = 0; j < blueie_size; j++) {
            cout << blueie[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Long cucmber :" << endl;
    for(int i = 0; i < pinkie_size; i++){
        for(int j = 0; j < pinkie_size; j++) {
            cout << pinkie[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Blueie diaognal sum is: " << bluei_diagonal_sum << endl;
    cout << "Pinkie diaognal sum is: " << pinkie_diagonal_sum << endl;

    return 0;
}