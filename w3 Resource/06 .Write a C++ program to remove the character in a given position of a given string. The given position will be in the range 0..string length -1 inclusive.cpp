#include <iostream>
 using namespace std;
   int main(){
     string a;
     int s,i,position,j=0;
     cin>>a;
     cin>> position;
    s=a.size();
   for(i=0;i<=s;i++){
    if(i==position){
     continue ;
    }
    else{
        a[j]=a[i];
        j++;
    }
   }

   cout<<a<<endl;
   return 0;
   }
