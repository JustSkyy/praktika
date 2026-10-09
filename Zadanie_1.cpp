#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "The array size must be positive." << endl;
        return 0;
    }

    if (n > 1000) {
        cout << "You can enter no more than 1000 elements." << endl;
        return 0;
    }

    int a[1000];

    cout << "Enter " << n << " integers:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }

        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }

    int left = minIndex;
    int right = maxIndex;

    if (left > right) {
        int temp = left;
        left = right;
        right = temp;
    }

    int sum = 0;

    for (int i = left + 1; i < right; i++) {
        if (a[i] < 0) {
            sum = sum + a[i];
        }
    }

    cout << "Sum of negative elements between min and max: "
        << sum << endl;

    return 0;
}
