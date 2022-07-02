// Created by Juned Inamdar on 02-july-2022
// simple code for Reverse printing of the array

// 1) Initialize start and end indexes as start = 0, end = n-1 
// 2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
// start = start +1, end = end – 1

#include<bits/stdc++.h>
using namespace std;

void Array_reverse(int Array[], int Start, int End){
      while(Start < End){
            int temp = Array[Start];
            Array[Start] = Array[End];
            Array[End] = temp;
            Start++;
            End--;
      }
}

void PrintArray(int Array[], int Size){
      for(int i = 0; i < Size;i++){
            cout << Array[i] <<" ";
      }
}

int main(){
      int Array[1000], Size=0;

      cout << "\n Enter the size of Array"<< endl;
      cin >> Size;

      cout << "\n Enter the elements of the array"<< endl;
      for(int i = 0; i < Size;i++){
            cin >> Array[i];
      }
      
      PrintArray(Array, Size);
      
      Array_reverse(Array,Array[0],Array[Size-1]);
      cout <<"\n Array after reversing"<< endl;
      
      PrintArray(Array, Size);

      return 0;
}