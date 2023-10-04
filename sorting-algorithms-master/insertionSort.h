#include <iostream>

using namespace std;

void insertion(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void printArr(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Before sorting, array elements are: " << endl;
    printArr(a, n);

    insertion(a, n);

    cout << "\nAfter sorting, array elements are: " << endl;
    printArr(a, n);


    cout<<"\n the minimum value is:   "<<a[0]<<endl;
    cout<<"\n the maximum value is:   "<<a[n-1] <<endl;

    return 0;
}
