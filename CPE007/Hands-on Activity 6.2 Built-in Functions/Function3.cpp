#include <iostream>
using namespace std;
#include <iomanip>

void greetUser();
void userChart();
double celsiusFormula(double c);
double farenheitFormula(double f);

int main(){
	
greetUser();	
userChart();

	return 0;
}

void greetUser(){
	cout << "- - - - - Welcome to Temperature Table - - - - -" << endl;
}
void userChart(){
	cout << endl << "Celsius -> Ferenheit | Farenheit -> Celcsius" << endl;
	cout <<  "---------------------------------------------" << endl;
	cout << fixed << setprecision(2);
	
	double c = 0;
	double f = 32;
	
	while(c <= 100 && f <= 212){
		cout << c <<"C           "<< f <<"F     |   "<< celsiusFormula(c) <<"F        " << farenheitFormula(f) <<"C"<< endl;
		c += 5;
		f += 5;
	}
}
double celsiusFormula(double c){
	return (c * 9.0 / 5.0 ) + 32;
}
double farenheitFormula(double f){
	return (f - 32) * 5.0 / 9.0;
}



