/* Write a C++ program to declare class ‘Account’ having data members as Account_No and
Balance. Accept this data for 10 accounts and display data of Accounts having balance greater
than 10000.
*/


#include <iostream>

using namespace std;

class Account {

public:
  int acc_no, bal;
  void getdata(int i) {
    cout << "Enter account number for " << i << " Account : ";
    cin >> acc_no;

    cout << "Enter balance for " << i << " Account : ";
    cin >> bal;
  }
  void putdata() {
    cout << "Account number: " << acc_no << endl;
    cout << "Balance: " << bal << endl;
  }
};

int main() {
  Account a[10];
  int i;
  for (i = 0; i < 10; i++) {
    a[i].getdata(i + 1);
  }
  for (i = 0; i < 10; i++) {
    if (a[i].bal > 1000) {
      a[i].putdata();
    }
  }
  return 0;
}
