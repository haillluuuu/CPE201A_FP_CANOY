#include <iostream>
#include <cmath>
using namespace std;

void greetUser();
double hypotenuse(double side1, double side2);

int main(){
	double s1, s2;
	greetUser();
	
	cout << "Enter Side 1 : ";
	cin >> s1;
	
	cout << "Enter Side 2 : ";
	cin >> s2;
	
	cout << "The Hypotenuse is : " << hypotenuse(s1,s2);
	return 0;
}

void greetUser(){
	cout << "- - - - - Welcome to the Hypotenuse Calculator - - - - -" << endl; 
}
double hypotenuse(double side1, double side2){
	return sqrt((side1 * side1) + (side2 * side2));
}


