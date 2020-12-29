#include <iostream>
using namespace std;

int main () {
  /** print this pattern using if else 
   *              *
   *             **
   *            ***
  */
  int rows = 4;
  for (int i = 1; i <= rows; i++){
    // for loop for space rows -i
    for (int j = 1; j <= rows-i; j++){
      cout << "  ";
    };
    // for loop for *
    for (int k = rows-i; k < rows; k++){
      cout << "* ";
    };
    cout << endl;
  };
  return 0;
} 