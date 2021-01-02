#include <iostream>
using namespace std;

int main () {
  /*
    1
   1 2
  1 2 3
 1 2 3 4 */
  int rows = 6;
  for(int i=1;i<=rows;i++){
    for(int j=rows-i;j>0;j--){
      cout<<' ';
    }
    for(int k=1;k<i;k++){
      cout<<k<<' ';
    }
    cout<<endl;
  }
  return 0;
} 