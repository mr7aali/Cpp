#include<iostream>
using namespace std;
int main(){
    int N,i,t=0,C=0,R=0,S=0;
    double C_p,R_p,S_p;
    char animal_name;
    cin>>N;
    for(i=1;i<=N;i++){
        cin>>t>>animal_name;
        if('C'==animal_name){
            C=C+t;
        }
       else if('R'==animal_name){
           R=R+t;
       }
       else if('S'==animal_name){
            S=S+t;
       }
    }
    printf("Total: %d cobaias\n",C+R+S);

    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);

   C_p=C*100.00/(C+R+S) ;
   R_p=R*100.00/(C+R+S) ;
   S_p=S*100.00/(C+R+S) ;

    printf("Percentual de coelhos: %.2lf %\n",C_p);
    printf("Percentual de ratos: %.2lf %\n",R_p);
    printf("Percentual de sapos: %.2lf %\n",S_p);
return 0;
}
