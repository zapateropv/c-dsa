#include <iostream>
using namespace std;

int main() {
  
  int num[5];
  int search
  bool isFound = false;
  
  cout << "Enter five values: ";
  
  for(int i =0; i < 5; i ++){
      cin >> num[i];
  }
  
  cout << "Enter number to be searched: ";
  cin >> search;
  
  for(int i = 0; i < 5; i++){
      if(search == num[i]){
          cout << "Data is present";
          isFound = true;
          break;
      }
  }
  
  if(!isFound){
      cout << "Data is not present ";
  }
  return 0;
}
