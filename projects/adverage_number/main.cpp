#include<iostream>
using namespace std;

int main()
{
  double first;
  double second;
  double third;
  double adverage;
  cout << "Hello, enter a number:" << endl;
  cin >> first;
  cin.get();

  cout << "Enter a second number:" << endl;
  cin >> second;

  cin.get();

  cout << "Enter a third number:" << endl;
  cin >> third;

  cin.get();

  adverage = (first + second + third)/3; 
  cout << "The adverage is:" << adverage << endl;

  return 0;
}
