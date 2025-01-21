
#include <iostream>

using namespace std;


 
int product(int n){
  int times;
  for( int i = 0; i < n; i++){
    times *= i;
      
    return times;
    
}
int main() {

  cout << "Hello World!" <<endl;
  int n; 
  cout << "Enter a number: ";
  cin >> n;
  
  cout << "THe sum of numbers 1 to " << n << " is " << sum(n) <<endl;
 
  
  return 0;
}
