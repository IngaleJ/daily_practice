#include <iostream>
using namespace std;

int main () {
/**   
print
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
  int rows = 4;
  for (int i = 0; i <= rows; i++){
    for (int k = rows-i; k > 0 ; k--){
      cout << ' ';
    }
    for (int j = 1; j <= 2*(i)+1 ; j++){
      cout << '*';
    }
    cout << endl;
  } 
  return 0;
}
