// Created by Juned Inamdar on 02-july-2022

// 1) Initialize start and end indexes as start = 0, end = n-1 
// 2) Swap arr[start] with arr[end] 
// 3) Recursively call reverse for rest of the array.

//Time complexity is O(n)

#include<bits/stdc++.h>
using namespace std;

void Array_reverse(int Array[], int Start, int End) {
      
      if(Start>=End){
            return ;
      }
      int temp;
      temp = Array[Start];
      Array[Start] = Array[End];
      Array[End] = temp;
      
      Array_reverse(Array, Start+1, End-1);
}
void PrintArray(int Array[], int Size){
      for(int i=0; i <Size; i++){
            cout<< Array[i] <<" ";
      }
}
int main(){
      int Array[1000], Size=0;
      
      cout<<"\n Enter the size of array"<<endl;
      cin>>Size;
      
      cout<<"\n Enter the array element"<<endl;
      for(int i=0;i<Size;i++){
            cin>>Array[i];
      }
      
      Array_reverse(Array,0,10);
      
      PrintArray(Array,Size);

      return 0;
}