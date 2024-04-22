#include <iostream>
#include <string>

using namespace std;

class Chicken {
public:
	// Constructor
	Chicken(string make, string breed, string gender, string color) {
		this->make = make;
		this->breed = breed;
		this->gender = gender;
		this->color = color;
		this->is_eating = false;
	}
	
	// Method to start the chicken
	void start() {
		this->is_eating = true;
		cout << "The chicken is now eating." << endl;
	}
	
	// Method to stop the chicken
	void stop() {
		this->is_eating = false;
		cout << "The chicken has stopped eating." << endl;
	}
	
	//Accessors
	string getMake() const { return make; }
	string getBreed() const { return breed; }
	string getGender() const { return gender; }
	string getColor() const { return color; }
	
private:
	string make;
	string breed;
	string gender;
	string color;
	bool is_eating;
};

int main() {
	// Creating objects (instances) of the Chicken class
	Chicken chicken1("Shamo", "Belgian", "Male", "Red");
	Chicken chicken2("Asil", "North Indian","Male", "Black");
	
	// Assessing properties and invoking methods
	cout << chicken1.getMake() << " " << chicken1.getBreed() << endl;
// Output: Shamo Belgian
	chicken1.stop();
// Output: The chicken is now eating.

	return 0;
}