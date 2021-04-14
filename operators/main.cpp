/*
arithmetic operators
+ plus
- minus
/ division
% reminder
*/
#include<iostream>
using namespace std;

int main(){
  
  double a = 5;
  double b = 7;
  int c = 9;
  int d = 22;
  bool t = true;
  bool f = false;
  int sum = a+b;
  int dif = b-a;
  int prduct = a*b;
  double div = a/b;
  int rem = c%d;

  cout << boolalpha;
  cout << "sum " << sum << endl;
  cout << "dif " << dif << endl;
  cout << "div " << div << endl;
  cout << "rem " << rem << endl;
  cout << "prod " << prduct << endl;
  cout << (a < b ) << endl;

  cout << "OR OPERATOR " << (t||f) << endl;
  cout << "AND OPERATOR " << (t && f) << endl;

  return 0;
}
