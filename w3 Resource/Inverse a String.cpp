#include<iostream>
using namespace std;
  int main(){
      string a;
     int s,i;
     char t;
     cin>>a;
     s=a.size();
     s--;
     for(i=0;i<s;i++){
        t=a[i];
        a[i]=a[s];
        a[s]=t;
        s--;
     }

     cout<<a<<endl;
  return 0;
  }
