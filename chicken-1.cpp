#include <iostream>
#include <string>

using namespace std;

class Book {
public:
	// Constructor
	Book(string title, int numberOfPages) {
		this->title = title;
		this->numberOfPages = numberOfPages;
		this->is_Fictional = false;
	}
	
	// Method to start the Book
	void fiction() {
		this->is_Fictional = true;
		cout << "The Book is fictional." << endl;
	}
	
	// Method to stop the Book
	void nonfiction() {
		this->is_Fictional = false;
		cout << "The Book is not fictional." << endl;
	}
	//Accessors
	string getTitle() const { return title; }
	int getNumberOfPages() const { return numberOfPages; }
	
private:
	string title;
	int numberOfPages;
	bool is_Fictional;
};

int main() {
	// Creating objects (instances) of the Book class
	Book book1("Ang Alamat", 200);
	Book book2("CPE lang malakas", 100);
	
	// Assessing properties and invoking methods
	cout << book1.getTitle() << " " <<endl << book1.getNumberOfPages() <<" pages" << endl;
	book1.nonfiction();
	return 0;
}