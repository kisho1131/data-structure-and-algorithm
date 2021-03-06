#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  int i = 0;
  int j = 0;
  int k = l;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of
  // L[], if there are any
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Copy the remaining elements of
  // R[], if there are any
  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void MergeSort(int arr[], int s, int e) {
  if (s >= e)
    return;
  int middle = (s + e - 1) / 2;
  MergeSort(arr, s, middle);
  MergeSort(arr, middle + 1, e);
  Merge(arr, s, middle, e);
}

int main(int argc, char const *argv[]) {
  int arr[] = {5, 2, 1, 3, 7, 0, 10, 66, 3, 3, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  MergeSort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << "->";
  }
  return 0;
}
