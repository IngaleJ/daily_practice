#include <iostream>
using namespace std;

int main (){
  int rows = 4;
  int columns = 6;
  for (int i = 0; i <= rows; i++){
    for (int j = 0; j <= columns; j++){
      // if condition for first and last row
      if (i == 0 || i == rows){
        cout << '*';
      }else{
        // else for middle rows
        j==0 || j == columns ? cout << '*' : cout << ' ';
      };
      
    };
    cout << endl;
  };

  return 0;
}