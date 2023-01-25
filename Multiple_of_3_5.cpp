#include <bits/stdc++.h>
using namespace std;
int main()
{
      int range,i,count = 0;
      cout<<"range: ";
      cin>>range;
      
      
      for(i=0;i<range;i++){
            if(i%3==0||i%5==0)
            count = count + i;
      }
      cout<<count<<endl;     
      return 0;
}