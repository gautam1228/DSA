# include <iostream>
# include <bits/stdc++.h>
using namespace std;

// ----------- Problem Statement -----------
// Given an array of workloads, you need to distribute the
// workload amongst k-workers such that the max workload
// assigned to a worker is minimized.
// ( Note: A valid workload is a subarray. )
// ----------- End -----------

// Monotonic predicate function (FFFFFFFFTTTTTTTT)
//                                       ^ need to find this index
bool possible(int x, int k, vector<int> &workloads) {
    int usedWorkers = 1;
    int currentWorkload = 0;
    for (auto work : workloads) {
        if (currentWorkload + work <= x) {
            currentWorkload += work;
        } else {
            if (usedWorkers == k) {
                return false;
            }
            if (work > x) return false;
            usedWorkers++;
            currentWorkload = work;
        }
    }
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> workloads(n);
    for(int i = 0; i < n; i++) {
        cin >> workloads[i];
    }

    int low = 0, high = 1e9;
    int ans = 1e9;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(mid, k, workloads)) {
            ans = min(ans, mid);
            high = mid - 1;
        } else {
            low = mid + 1;
        };
    }
    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
