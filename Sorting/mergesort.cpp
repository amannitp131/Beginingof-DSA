#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;  // Size of low subarray
    int n2 = high - mid;     // Size of high subarray

    int lowArray[n1], highArray[n2];  // Create arrays for both subarrays

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        lowArray[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++) {
        highArray[i] = arr[mid + 1 + i];
    }

    // Merge the temporary arrays back into arr[low..high]
    int i = 0; // Initial index of low subarray
    int j = 0; // Initial index of high subarray
    int k = low; // Initial index of the merged subarray

    while (i < n1 && j < n2) {
        if (lowArray[i] >= highArray[j]) {
            arr[k] = lowArray[i];
            i++;
        } else {
            arr[k] = highArray[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of lowArray[], if any
    while (i < n1) {
        arr[k] = lowArray[i];
        i++;
        k++;
    }

    // Copy remaining elements of highArray[], if any
    while (j < n2) {
        arr[k] = highArray[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        // Find the midpoint of the array
        int mid = low + (high - low) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        // Merge the two halves
        merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    mergeSort(arr, 0, n - 1);

    // Output sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
