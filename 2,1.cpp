#include <iostream>
#include <limits.h>
using namespace std;

int big2(int arr[], int n) {
    if (n < 2) return -1;

    int mot = INT_MIN, hai = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mot) {
            hai = mot;
            mot = arr[i];
        } else if (arr[i] > hai && arr[i] < mot) {
            hai = arr[i];
        }
    }

    return (hai == INT_MIN) ? -1 : hai;
}

int main() {
    int* arr = new int[1000];
    int n = 0, num;

    
    while (cin >> num) {
        if (n < 1000) {
            arr[n++] = num;
        } else {
            cout << "None" << endl;
            break;
        }
    }
    int kq = big2(arr, n);
    if (kq == -1) {
        cout << "None" << endl;
    } else {
        cout  << kq << endl;
    }

    
    return 0;
}
