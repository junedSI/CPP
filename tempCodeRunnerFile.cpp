#include <bits/stdc++.h>
using namespace std;
int main(){
      int array[10];
      int counter = 0;
       for(int i=0; i<10; i++){
            cin >> array[i];
      }
      for(int j=0; j<10; j++){
            int max = array[j];
            for(int i=0; i<10; i++){
                  if(max < array[i]){
                        counter++;
                        }
            }  