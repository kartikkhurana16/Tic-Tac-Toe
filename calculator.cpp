#include<iostream>
using namespace std;

int main()
{
  string operation;
  float number1, number2;
  cout << "Enter the first no.: ";
  cin>>number1;
  cout << "enter the operation: ";
  cin>>operation;
  cout << "enter the second no. ";
  cin>>number2;

  if (operation == "+"){
    cout<<number1+number2;
  }
  else if (operation == "-"){
    cout<<number1-number2;
  }
  else if (operation == "*"){
    cout<<number1*number2;
  }
  else if (operation == "/"){
    cout<<number1/number2;
  }
  else {
    cout<<"invalid operation";
  }
  return 0;
}