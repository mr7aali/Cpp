#include<iostream>
using namespace std;

int main(){
  double x,y,t,i;
  double z;

  cin>>t;

  for(i=1;i<=t;i++){
    cin>>x>>y;
    if(y==0){
    cout<<"divisao impossivel"<<endl;
    continue;
    }
    z=x/y;
    printf("%.1lf\n",z);
  }

return 0;
}
