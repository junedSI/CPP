// Created by Juned Inamdar on 02-july-2022
// simple code for Reverse printing of the array

//Time complexity is O(n)

#include <bits/stdc++.h>
using namespace std;

void PrintArray_reverse(int Array[],int Size){
      for (int i = Size-1; i >=0;i--){
            cout <<Array[i]<<" ";
      }
}

int main(){
      int Array[1000],Size=0;
      
      cout << "\n Enter the size of the array"<<endl;
      cin >> Size;

      
      cout << "\n Enter the array Elements"<< endl;
      for (int i = 0; i <Size;i++){
            
            cin >> Array[i];
      }
      
      PrintArray_reverse(Array,Size);
      
      return 0;
}