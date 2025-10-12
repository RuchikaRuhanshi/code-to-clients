#include <bits/stdc++.h>
using namespace std;

// Selection sort
void selection_sort(int arr[], int n) {
  for (int i = 0; i <= n - 2; i++) {
    int mini;
    for (int j = i; j <= n - 1; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  selection_sort(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

// Bubble sort
void bubble_sort(int arr[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    int didswap = 0;
    for (int j = 0; j <= i - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
        didswap = 1;
      }
    }
    if (didswap == 0) {
      break;
    }
    cout << "Runs\n";
  }
}

// Insertion sort
void insertion_sort(int arr[], int n) {
  for (int i = 0; i <= n; ++i) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
      cout << "Runs\n"
    }
  }
}
