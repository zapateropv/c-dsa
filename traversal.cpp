#include <iostream>
using namespace std;

int main() {
  
  int num[5];
  int placeHolder = 0;
  
  cout << "Enter five values: ";
  
  for(int i =0; i < 5; i ++){
      cin >> num[i];
  }
  
  placeHolder = num[0];
  
  for(int i =1; i < 5; i ++){
      if(placeHolder < num[i]){
          placeHolder = num[i];
      }
  }
  
  cout << "max value is: " << placeHolder;
  return 0;
}
