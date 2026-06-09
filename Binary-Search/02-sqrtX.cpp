#include <bits/stdc++.h>
using namespace std;

void solveDecimalFor(double x) {
    
    // Note:
    // Say x ranges from: -10^9 to 10^9
    // This means the search space is 2 x 10^9 x 10^6
    // In order to avoid precision issues and not get stuck
    // in an infinite loop, we need to do some calculations
    // No of iterations required: log2(searchSpace x precision)
    // SO in this case: log2(2 x 10^9 x 10^6) = 50
    // We take extra iterations just to be sure ~ 60
    // In this way we don't have to deal with precision issues

    // Note: Another important detail to note is that whenever
    // x precision is asked, always return x + 1.
    // This helps to not run into any precision issues.

    double precision = 1e-6;
    
    double low = 0, high = x;
    double ans = 0;
    int iterations = 60;
    for (int i = 0; i < iterations; i++) {
        double mid = (low + high)/2;
        if (mid * mid <= x){
            ans = max(ans, mid);
            low = mid + precision;
        } else {
            high = mid - precision;
        }
    }
    
    // ans valid upto 6 decimal places
    cout << setprecision(7) << fixed;
    cout << "Computed Square root of " << x << ": " << ans << endl;
}

int solveInt(int x) {
    int low = 0, high = x;
    long ans = 0;
    while (low <= high)
    {
        long mid = (low + high) / 2;
        // if (mid <= x / mid) (In order to prevent overflow issues with int)
        if (mid * mid <= x)
        {
            ans = max(ans, mid);
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int numInt = 16;
    int sqrtInt = solveInt(numInt);
    cout << "Computed Square root of " << numInt << ": " << sqrtInt << endl;
    
    double numDouble = 2;
    solveDecimalFor(numDouble);

    return 0;
};