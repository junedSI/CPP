// even odd elements of array using ternary operator
#include<bits/stdc++.h>
using namespace std;

int main(){
      int Array[1000];
      int Size;
      
      cout << "\n Enter the size of the array"<< endl;
      cin >> Size;
      cout << "\n Enter the elements of the array"<< endl;
      
      for (int i = 0; i <Size; i++){
            cin >> Array[i];
      }
      cout << "\n"<< endl;
      for(int i = 0; i <Size; i++){
            (Array[i] % 2 == 0) ? cout << Array[i]<< " \nis even.\n" :  cout << Array[i] << " \nis odd.\n";
      }
     return 0;
}