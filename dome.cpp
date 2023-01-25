#include<iostream>
using namespace std;
int main(){
      int array[100][100];
      int n = 0;
      cout << "Enter dimension of matrix" << endl;
      cin >> n;
      
      for(int i = 0; i <n; i++)
      {
            for (int j=0;j<n;j++){
                  cin >> array[i][j];
            }
      }
      cout <<"\n"<<endl;
      for(int i = 0; i <n; i++){
            for(int j = 0;j<n;j++){
                 if (i==j){
                  cout << array[i][j] << endl;
                 }
            }
            cout <<"\n"<< endl;
      }
      return 0;
}