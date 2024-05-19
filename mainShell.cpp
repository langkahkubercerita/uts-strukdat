#include <iostream>

using namespace std;

void shellSort(int arr[], int n) {
  int gap = n / 2;

  for (int i = gap; i > 0; i /= 2) {
    for (int j = i; j < n; j++) {
      if (arr[j] < arr[j - i]) {
        int temp = arr[j];
        arr[j] = arr[j - i];
        arr[j - i] = temp;
      }
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Array awal: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  shellSort(arr, n);

  cout << "\nArray yang diurutkan: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
