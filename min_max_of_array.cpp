// Maximum and Minimum of an array using Minimum number of comparisons

#include<bits/stdc++.h>
using namespace std;

struct Pair{
      int Min;
      int Max;
};

Pair GetMinMax(int Array[],int n){
      
      struct Pair MinMax;
      int i;
      
      //if there exist only one element in the array
      //then it will return it as min max both
      if(n==1){
            MinMax.Max = Array[0];
            MinMax.Min = Array[0];
            return MinMax;
      } 
      
      //if there exist two element then it will initialize min and max
      if(Array[0]>Array[1]){
            MinMax.Max = Array[0];
            MinMax.Min = Array[1];
      }
      else{
            MinMax.Max = Array[1];
            MinMax.Min = Array[0];
      }
      
      for(i=2;i<n;i++){
            if(Array[i] > minmax.Max){
                  MinMax.Max = Array[i];
            }
            else if(Array[i] < MinMax.Min){
                  MinMax.Min = Array[i];
            }
      }
      return MinMax;
}

int main(){
      int Array[1000];
      int Size;
      cout << "\n Enter the no of elements you want in array\n" << endl;
      cin >> Size;
      cout<< "\n Enter n Elements"<< endl;
      
      for (int i=0;i<Size;i++){
            cin >>Array[i];
            cout << "\n"<< endl;

      }
      
      struct Pair MinMax = GetMinMax(Array, Size);
      cout<< "\n minimum element is"<< MinMax.Min << endl;
      cout<< "\n maximum element is"<< MinMax.Mix << endl;
      return 0;
}
