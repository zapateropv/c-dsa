#include <iostream>
using namespace std;

int main() {
  
  int num[10];
  int element;
  bool found = false;
  
  cout << "Enter 10 elements :";
  
  
  for(int i= 0; i < 10; i++){
      cin >> num[i];
      
  }
  
  cout << "Enter element to be searched: ";
  cin >> element;
  
  for(int i =1; i <= 10; i++){
      
      if(element == num[i]){
          cout << "The number: " << element << " is found at position " << i+1 << endl;
          found = true;
          break;
      }
      
     
  }
  
  if(!found){
      cout << "number is not found";
  }
  return 0;
}
