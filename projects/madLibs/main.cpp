#include <iostream>
#include <string>

using namespace std;

int main()
{
  string adjective1;
  string girlsName;
  string adjective2;
  string occupation1;
  string placeName;
  string clothing;
  string hobby;
  string adjective3;
  string occupation2;
  string boysName;
  string mansName;

  cout << "Hello, enter an adjective: " << endl;
  getline(cin,adjective1);
  

  cout << "Hello, enter a girls name: " << endl;
  getline(cin,girlsName);
  

  cout << "Hello, enter an adjective: " << endl;
  getline(cin, adjective2);

  cout << "Hello, enter an occupation: " << endl;
  getline(cin, occupation1);

  cout << "Hello, enter an place name: " << endl;
  getline(cin, placeName);

  cout << "Hello, enter a clothing: " << endl;
  getline(cin, clothing);

  cout << "Hello, enter an hobby: " << endl;
  getline(cin,hobby);

  cout << "Hello, enter an adjective: " << endl;
  getline(cin, adjective3);

  cout << "Hello, enter an occupation: " << endl;
  getline(cin, occupation2);

  cout << "Hello, enter a boy name: " << endl;
  getline(cin, boysName);

  cout << "Hello, enter a man name: " << endl;
  getline(cin, mansName);

  cout << "Theres once a time a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 <<  " " << occupation1 <<  " in the kingdom of " << placeName << " . " << endl;
  cout << "She loved to wear " << clothing << " and " << hobby << " . " << endl;
  cout << "She wanted to marry the " << adjective3 << " " << occupation2 << " named " << boysName << " but her father, King " << mansName << " forbid her to see him. " ;

  return 0;
}
