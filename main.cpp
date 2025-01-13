
#include <iostream>

using namespace std;


 int sum(int n){
    int total;
    for( int i = 0; i < n; i++){
      total += i;
  }
    return total;
}
int main() {

  cout << "Hello World!" <<endl;
  int n; 
  cout << "Enter a number: ";
  cin >> n;
  
  cout << "THe sum of numbers 1 to " << n << " is " << sum(n) <<endl;
 
  
  return 0;
}

