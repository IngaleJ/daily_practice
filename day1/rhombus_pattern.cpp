#include <iostream>
using namespace std;

int main () {
  int rows = 5;
  int columns = 4;
  for (int i=0;i<rows;i++){
    for (int j=columns-i;j>0;j--){
      cout<<' ';
    }
    for (int k=0;k<=columns;k++){
      cout<<'*';
    }
    cout<<endl;
  }
  return 0;
} 