#include <bits/stdc++.h>
using namespace std;

void mergeArray(int arr[], int l, int mid, int h) {
  vector<int> temp;
  int i = l;
  int j = mid + 1;

  while (i <= mid && j <= h) {
    if (arr[i] <= arr[j])
      temp.push_back(arr[i++]);
    else
      temp.push_back(arr[j++]);
  }

  while (i <= mid)
    temp.push_back(arr[i++]);
  while (j <= h)
    temp.push_back(arr[j++]);

  for (int k = l; k <= h; k++) {
    arr[k] = temp[k - l];
  }
}

void mergeSort(int arr[], int l, int h) {
  if (l >= h)
    return;

  int mid = (l + h) / 2;
  mergeSort(arr, l, mid);
  mergeSort(arr, mid + 1, h);
  mergeArray(arr, l, mid, h);
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  mergeSort(arr, 0, n - 1);

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  return 0;
}
