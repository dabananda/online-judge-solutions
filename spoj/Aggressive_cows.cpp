#include <iostream>
#include <algorithm>

using namespace std;

bool Check(long long arr[], long long n, long long mid, long long c) {
    long long last_position = arr[0], cow_counter = 1;
    for (long long i = 1; i < n; i++) {
        if (arr[i] - last_position >= mid) {
            last_position = arr[i];
            cow_counter++;
        }
        if (cow_counter == c) {
            return true;
        }
    }
    return false;
}

void Solution() {
    long long n, c;
    cin >> n >> c;
    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long low = 0, high = arr[n - 1] - arr[0], mid, position = -1;
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (Check(arr, n, mid, c)) {
            low = mid + 1;
            position = mid;
        } else {
            high = mid - 1;
        }
    }
    cout << position << "\n";
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        Solution();
    }
    return 0;
}
