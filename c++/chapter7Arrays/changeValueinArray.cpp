#include <iostream>
using namespace std;

int main() {
  
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Original array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " "; 
      if (i % 2 == 1) {
        arr[i] *=2;
      }
      else {
        arr[i] +=10;
      }
    }
  cout << endl;
  cout << "Modified array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
