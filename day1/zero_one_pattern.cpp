#include <iostream>
using namespace std;

int main (){
//  pattern 
/**
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
  int rows;
  cin >> rows;
  for (int i=1;i<=rows;i++){
    for (int j=0;j<i;j++){
      if ((i+j)%2 == 1){
        cout<<'1';
      }else{
        cout<<'0';
      }
    };
    cout<<endl;
  };
  return 0;
}