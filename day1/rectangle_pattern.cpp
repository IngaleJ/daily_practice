#include <iostream>
using namespace std;

int main (){
  // take input for rows and colums
  int rows = 4;
  int columns = 6;
  // cin >> rows >> columns;
  for (int i = 0; i < rows; i++){
    for (int j = 0; j < columns; j++){
      cout << '*';
    };
    cout << endl;
  };

  return 0;
}