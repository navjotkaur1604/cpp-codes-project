#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = INT_MIN, secondMax = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN)
        cout << "No second largest element found.";
    else
        cout << "Second largest element: " << secondMax;

    return 0;
}
