#include <iostream>
#include <cmath>
using namespace std;

struct newarray {
    double A[10];
    int size;
    int length;
};

int BinarySearch(struct newarray arr, int key) {
    double low = 0;
    double high = arr.size - 1;
    int mid;

    while (low <= high) {
        int mid = floor((low + high) / 2);

        if (key == arr.A[mid]) {
            cout << "Element present at index ";
            return mid;
        } else if (key < arr.A[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << "Element not found";
    return -1;
}

int main() {
    struct newarray arr{{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 10, 10};
    cout << BinarySearch(arr, 6);

    return 0;
}
