#include <iostream>
#include <string>

using namespace std;
class myApp{
	public:
		myApp(int i, string n, float g, char s){
			idNumber = i;
			myName = n;
			grade = g;
			sex = s;
		}
		int getIdNumber(){
			return idNumber;
		}
		string getMyName(){
			return myName;
		}
		float getGrade(){
			return grade;
		}		
		float getSex(){
			return sex;
		}		
	private:
		int idNumber;
		string myName;	
		float grade;	
		char sex;
};

int main(){
	myApp info1 (389381, "KENT PAUL ALOJADO",87.9,'m');
	cout <<"Id Number: " <<info1.getIdNumber() <<endl;
	cout <<"Name: " <<info1.getMyName() <<endl;
	cout <<"Grade: " <<info1.getGrade() <<endl;
	cout <<"Sex:" <<info1.getSex() <<endl;
	cout <<"------------------------------" <<endl;
	myApp info2 (389382, "RAUL ARSENO",88.6, 'M');
	cout <<"Id Number: " <<info2.getIdNumber() <<endl;
	cout <<"Name: " <<info2.getMyName() <<endl;
	cout <<"Grade: " <<info2.getGrade() <<endl;
	
	return 0;
}