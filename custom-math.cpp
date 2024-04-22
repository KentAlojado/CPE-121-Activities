#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main(){
	float num1;
	float num2;
	int result;
	cout <<"Enter the first number: ";
	cin >>num1;
	cout <<"Enter the second number: ";
	cin >>num2;
	cout << "1 - Addition" <<endl << "2 - Subtraction" <<endl << "3 - Multiplication" <<endl << "4 - Division" <<endl;
	cout << "Enter your desired number (1-4): ";
    while (!(cin >> result) || result < 0 || result > 4) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter only numbers from 1-4: ";
}  

  switch (result) {
  /*Case 1: SUM*/
  case 1:
    cout << "You just pressed 1. This app uses addition as operation." <<endl;
    cout << "------------------------------------------" <<endl;
    cout << "The sum of two numbers is " <<num1+num2 <<endl;
    break;
  /*Case 2: DIFFERENCE*/
  case 2:
    cout << "You just pressed 2. This app uses subtraction as operation." <<endl;
    cout << "------------------------------------------" <<endl;
    cout << "The difference of two numbers is " <<num1-num2 <<endl;
    break;
  /*Case 3: PRODUCT*/    
  case 3:
    cout << "You just pressed 3. This app uses multiplication as operation." <<endl;
    cout << "------------------------------------------" <<endl;
    cout << "The product of two numbers is " <<num1*num2 <<endl;
    break;
  /*Case 1: QUOTIENT*/
  case 4:
    cout << "You just pressed 4. This app uses division as operation." <<endl;
    cout << "------------------------------------------" <<endl;
    cout << "The quotient between two numbers is " <<num1/num2 <<endl;
    break;
}
	return 0;
}
