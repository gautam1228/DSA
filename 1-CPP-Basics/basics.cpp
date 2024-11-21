#include <bits/stdc++.h>
using namespace std;

void incrementBy5(int &num){
    num = num + 5;
}

int main(){

    // ---------------------- Data-types ----------------------

    // // range -> [-10^9, 10^9]

    // int numInt = INT_MAX;

    // cout << numInt << endl;

    // long numLong = LONG_MAX; // 10^12

    // long long numLongLong = 10000000000000; // 10^18

    // float numFloat = 10.5412321; // 7 decimal places

    // double numDouble = 10.7; // 15 decimal places

    // cout << numFloat << endl;

    // char ch = '^';

    // cout << ch << endl;

    // string str = "hi";

    // cout << str;


    // ---------------------- Taking-Input ----------------------

    // int num1;
    // int num2;

    // cin >> num1 >> num2;

    // cout << num1 << endl;
    // cout << num2;

    // Getting the whole line

    // string str1, str2;

    // getline(cin, str1);
    // getline(cin, str2);

    // cout << str1 << endl << str2;

    // Taking mulitple numbers as input ( The naive way )
    // int num;
    // for(int i = 0; i < 5; i++){
    //     cin >> num;
    //     cout << num << endl;
    // }

    // Taking mulitple numbers as input ( The pro way )
    // int arr[5];
    // for (int i = 0; i < 4; i++){
    //     cin >> arr[i];
    //     cout << arr[i] << endl;
    // }
    

    // ---------------------- Pass By Value & Reference ----------------------

    int num = 10;

    incrementBy5(num);

    cout << num << endl;

    return 0;
}