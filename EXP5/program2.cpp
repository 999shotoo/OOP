// Question Goes here
#include <iostream>

using namespace std;

class Student{
    
    private:
      char name[50],sirname[50];
      int roll_no;
    
    public:
     
      void getdata();
      void putdata();
    
};

void Student::getdata(){
    cout<<"Enter student Name, Sirname and Roll_no: \n";
    cin>>name>>sirname>>roll_no;
}

void Student::putdata(){
    cout<<"Student Name:"<<name;
    cout<<"\n";
    cout<<"Student SirName:"<<sirname;
    cout<<"\n";
    cout<<"Student RollNumber:"<<roll_no;
    cout<<"\n";
}

int main(){
    Student s;
    s.getdata();
    s.putdata();
    return 0;
}
