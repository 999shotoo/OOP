//Question Goes here
#include <iostream>

using namespace std;

class Staff{
    private:
      char name[50];
      int basic_salary, HRA, DA, gross_salary;
      
    public:
      void getdata();
      void putdata();
};

void Staff::getdata(){
  cout<<"Enter the Name of the Staff: ";
  cin>>name;
  cout<<"Enter the Basic Slary of the Staff:";
  cin>>basic_salary;
}

void Staff::putdata(){
  HRA=(basic_salary*30)/100;
  DA=(basic_salary*74.5)/100;
  gross_salary=basic_salary+HRA+DA;
  cout<<"HRA is : "<<HRA;
  cout<<"\n";
  cout<<"DA is : "<<DA;
  cout<<"\n";
  cout<<"Gross Salary is : "<<gross_salary;
  cout<<"\n";
}

int main(){
   Staff s;
   s.getdata();
   s.putdata();
   return 0;
}
