#include <iostream>
using namespace std;


int main()
{
    int number[5];
    int num = 0;
    
    cout << "Enter values: ";
    
    for(int i =0; i < 5; i++){
        cin >> number[i];
    }
    
    for(int i =0; i < 4; i++){
    for(int i =0; i < 4; i++){
        if(number[i] > number[i + 1]){
            int temp = number[i];
            number[i] = number[i + 1];
            number[i + 1] = temp;
        }
    }
}
      cout << "sorted values: ";
      for(int i =0; i < 5; i++){
        cout << number[i] << " ";
    }
    return 0;
}
