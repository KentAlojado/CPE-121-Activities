#include <iostream>
#include <string>

using namespace std;

class CustomApp{
	public:
	CustomApp(string n, string a){
		name = n;
		address = a;
	}
	string getName(){
		return name;
	}
	string getAddress(){
		return address;
	}	
	private:
	string name;
	string address;	
};
int main(){
	CustomApp kent1("Student One","Oton, Iloilo");
	cout <<"\033[31m" <<"Name: " <<"\033[0m" <<kent1.getName() <<endl <<"\033[31m" <<"Address: " <<"\033[0m" << kent1.getAddress() <<endl;
	cout <<"\033[2m" <<"------------------------------------------" <<"\033[0m" <<endl;
	CustomApp kent2("Student Two","Malay, Aklan");
	cout <<"\033[31m" <<"Name: " <<"\033[0m" <<kent2.getName() <<endl <<"\033[31m" <<"Address: " <<"\033[0m" << kent2.getAddress() <<endl;
	cout <<"\033[2m" <<"------------------------------------------" <<"\033[0m" <<endl;
	CustomApp kent3("Student Three","San Jose, Antique");
	cout <<"\033[31m" <<"Name: " <<"\033[0m" <<kent3.getName() <<endl <<"\033[31m" <<"Address: " <<"\033[0m" << kent3.getAddress() <<endl;
	cout <<"\033[2m" <<"------------------------------------------" <<"\033[0m" <<endl;
	CustomApp kent4("Student Four","Bacolod, Negros Occidental");
	cout <<"\033[31m" <<"Name: " <<"\033[0m" <<kent4.getName() <<endl <<"\033[31m" <<"Address: " <<"\033[0m" << kent4.getAddress() <<endl;
	cout <<"\033[2m" <<"------------------------------------------" <<"\033[0m" <<endl;
	
	return 0;
}