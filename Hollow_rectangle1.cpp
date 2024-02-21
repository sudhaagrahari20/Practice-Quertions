#include <iostream>
using namespace std;
int main() {
  int rowCount, colCount;
  cin >> rowCount;
  cin >> colCount;
  // Hallow rectangle
  for (int row = 0; row < rowCount; row = row + 1) {
    if (row == 0 || row == rowCount - 1) {
      for (int col = 0; col < colCount; col++) {
        cout << "*";
      }
    } else {
      // remainging middle rows
      cout << "*";
      // spaces
      for (int i = 0; i < colCount - 2; i = i + 1) {
        cout << " ";
      }
      // last star
      cout << "*";
    }
    cout << endl;
  }
}
