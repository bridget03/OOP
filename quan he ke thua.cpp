#include<iostream>
using namespace std;

class Person{
	protected:
		char Name[25];
		int Age;
		char Address[25];
	public:
		void Input();
		void Output(); 
};
void Person::Input(){
	cout << "import name: ";	fflush(stdin)	;gets(Name);
	cout << "import age: ";		cin >> Age;
	cout << "import address:";	fflush(stdin)	;gets(Address);
}
void Person::Output(){
	cout << "name: " << Name << "\nage: " << Age << "\naddress: " << Address << endl;
}
class Student : public Person{
	char Class[10];
	char Major[20];
	char School[30];
public:
	void Input();
	void Output();
};
void Student::Input(){
	Person::Input();
	cout << "import class: "		;fflush(stdin)		;gets(Class);
	cout << "import major: "		;fflush(stdin)		;gets(Major);
	cout << "import school: "		;fflush(stdin)		;gets(School);
}
void Student::Output(){
	Person::Output();
	cout << "class: " << Class << endl;
	cout << "major: " << Major << endl;
	cout << "school: " << School;
}




int main(){
	Student a;
	cout << "input: " << endl;
	a.Input();
	cout << "\nOutput: " <<endl;
	a.Output();
}