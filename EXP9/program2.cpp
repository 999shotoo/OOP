/*
Write a Program to declare a class birthday having data member day, month and year.
Accept this info for object using pointer to array of object and display it.
 */ 

#include <iostream>

using namespace std;

class birthday {
private:
  int day, month, year;

public:
  void read(int d, int m, int y) {
    month = m;
    day = d;
    year = y;
  }

  void display() {
    cout << "Birthdate is " << day << "/" << month << "/" << year << endl;
  }
};

int main() {
  birthday b[3], *ptr;
  int m, d, y, i;
  ptr = b;
  for (i = 0; i < 2; i++) {
    cout << "Enter the day: ";
    cin >> d;
    cout << "Enter the month: ";
    cin >> m;
    cout << "Enter the year: ";
    cin >> y;
    ptr->read(d, m, y);
    ptr++;
  }
  ptr = b;
  for (i = 0; i < 2; i++) {
    ptr->display();
    ptr++;
  }
  return 0;
}
