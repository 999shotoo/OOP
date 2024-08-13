// Question Goes Here
#include <iostream>

using namespace std;

class Number {
private:
  float n1, n2, sub, mul, add, div;

public:
  inline void getdata() {
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
  }
  inline void putdata() {
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;
    add = n1 + n2;
    cout << "Addition: " << add << endl;
    cout << "Subtraction: " << sub << endl;
    cout << "Multiplication: " << mul << endl;
    cout << "Division: " << div << endl;
  }
};

int main() {
  Number n;
  n.getdata();
  n.putdata();
  return 0;
}
