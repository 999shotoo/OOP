// Question goes here
#include <iostream>

using namespace std;

inline void Area(int length, int breadth){
   int area=length*breadth;
   cout<<"Area of rectangle is: "<<area<<endl;
}

int main() {
  int length, breadth;
  cout<<"Enter length and breadth of rectangle: ";
  cin>>length>>breadth;
  Area(length, breadth);
  return 0;
}
