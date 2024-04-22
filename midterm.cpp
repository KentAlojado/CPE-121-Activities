#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class triangleArea{
public:
	triangleArea(double b, double h){
		base = b;
		height = h;
	}
	double calculateArea(){
		return (base * height)/2;
	}
	double calculateMissingSide(){
		return sqrt(base*base + height*height);
	}
	double calculatePerimeter(){
		return base+height+ calculateMissingSide();
	}
	
	private:
		double height;
		double base;
};

int main() {
	triangleArea comp1(6.0,8.0);
	cout <<"The triangle 1 area is: " <<"\033[31m" << comp1.calculateArea() <<"\033[0m" <<endl;
	cout <<"The triangle 1 hypotenuse length is: " <<"\033[31m" << comp1.calculateMissingSide() <<"\033[0m" <<endl;
	cout <<"The triangle 1 perimeter is: "<<"\033[31m" << comp1.calculatePerimeter() <<"\033[0m" <<endl;
	cout <<"----------------------" <<endl;
	triangleArea comp2(4.0,7.0);
	cout <<"The triangle 2 area is: " <<"\033[31m" << comp2.calculateArea() <<"\033[0m" <<endl;
	cout <<"The triangle 2 hypotenuse length is: " <<"\033[31m" << comp2.calculateMissingSide() <<"\033[0m" <<endl;
	cout <<"The triangle 2 perimeter is: " <<"\033[31m" << comp2.calculatePerimeter() <<"\033[0m" <<endl;
	cout <<"----------------------" <<endl;
	triangleArea comp3(5.2,6.0);
	cout <<"The triangle 3 area is: " <<"\033[31m"  << comp3.calculateArea() <<"\033[0m" <<endl;
	cout <<"The triangle 3 hypotenuse length is: " <<"\033[31m" << comp3.calculateMissingSide() <<"\033[0m" <<endl;
	cout <<"The triangle 3 perimeter is: " <<"\033[31m" << comp3.calculatePerimeter() <<"\033[0m" <<endl;
	cout <<"----------------------" <<endl;
	triangleArea comp4(4.4,3.6);
	cout <<"The triangle 4 area is: " <<"\033[31m" << comp4.calculateArea() <<"\033[0m" <<endl;
	cout <<"The triangle 4 hypotenuse length is: " <<"\033[31m" << comp4.calculateMissingSide() <<"\033[0m" <<endl;
	cout <<"The triangle 4 perimeter is: " <<"\033[31m" << comp4.calculatePerimeter() <<"\033[0m" <<endl;
	return 0;
}