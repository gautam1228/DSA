#include <bits/stdc++.h>
using namespace std;

// Counting the number of occurences of a character in a character array (Only a-z)

int main()
{
    // Length of character array
    int n; cin >> n;
    char charArr[n];
    
    // Hash array that will be pre-computed
    // int hash[123] = {0};
    int hash[26] = {0};

    for(int i = 0; i < n; i++){
        cin >> charArr[i];
        hash[charArr[i] - 'a']++; // Increments the counter for the number of times the character appears
    }


    // Input number of queries
    int q; cin >> q;

    while(q--){
        char character; cin >> character;
        if(97 <= int(character) <= 122){
            cout << "Number of occurences of "<< character << ": " << hash[character - 'a'] << endl; 
        } else {
            cout << "Counting characters only between 'a-z'." << endl; 
        }
    }

    return 0;
}
