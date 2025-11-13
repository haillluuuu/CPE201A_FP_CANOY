#include <iostream>
using namespace std;

void greetUser();
int volumeComp(int sides);

int main (){
	int s;

	greetUser();
	
	cout << " Enter the Value of the Sides : ";
	cin >> s;
	
	cout << " The Volume of the Cube is : " << volumeComp(s);
	return 0;
}

void greetUser(){
	cout << "- - - - - Welcome to Cube Volume Computer - - - - -" << endl;
}
int volumeComp(int sides){
		return sides * sides * sides;
}
	
	
