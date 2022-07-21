#include<iostream>
using namespace std;
class Student{//Student is user type datatype
  public:
    string name;
    string id;
    int intake;
    double cgpa;

    Student(string n,string i ,int in,double cg){
      name=n;
      id=i;
      intake=in;
      cgpa=cg;
    }
 void dispaly(){
    cout<<"Name is "<<name<<endl;
    cout<<"Id is "<<id<<endl;
    cout<<"Intake is "<<intake<<endl;
    cout<<"Cgpa is "<<cgpa<<endl<<endl<<endl;
 }

};
int main(){

    Student s1("Sheikh","431",49,3.60);
    Student s2=Student("Bristy","121",29,4.00);

    s1.dispaly();
    s2.dispaly();

return 0;
}
