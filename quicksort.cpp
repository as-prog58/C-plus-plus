#include <iostream>
using namespace std;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}
int Divide(int array[], int left, int right) {
  int pivot = array[right];
  int i = (left - 1);
  for (int j = left; j < right; j++) {
    if (array[j] <= pivot){
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[right]);
  return (i + 1);
}
void quickSort(int array[], int left, int right) {
  if (left < right) {
    int pi = Divide(array, left, right);
    quickSort(array, left, pi - 1);
    quickSort(array, pi + 1, right);
  }
}
int main() {
  int data[] = {33,66,54,87,34,25,87,90};
  int n = sizeof(data) / sizeof(data[0]);
  cout << "Unsorted Array: \n";
  printArray(data, n);
  quickSort(data, 0, n - 1);
  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}
