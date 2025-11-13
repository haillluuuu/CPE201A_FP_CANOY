#include <iostream>
#include <string>
using namespace std;

int main (){
	int numberofstudents1;
	string name1;
	string surname1; 

    int studentnumber1;
    float a, b, c;
    
	cout << "Enter Number of Students : ";
	cin >> numberofstudents1;
	
	cout << "Enter Details for Student 1 : " << endl;
	cout << "Name : ";
	cin >> name1 >> surname1;
	cout << "Student Number : ";
	cin >> studentnumber1;
	cout << "Enter 3 Grades : " ;
	cin >> a >> b >> c;
	cout << endl;
	
	float total1 = (a + b + c) /3 ;
	
	string name2;
	string surname2; 
    int studentnumber2;
    float grade2;
    float a2, b2, c2;
    
	
	cout << "Enter Details for Student 2 : " << endl;
	cout << "Name : ";
	cin >> name2 >> surname2;
	cout << "Student Number : ";
	cin >> studentnumber2;
	cout << "Enter 3 Grades : " ;
	cin >> a2 >> b2 >> c2;
	cout << endl;
	
	float total2 = (a2 + b2 + c2) /3 ;
	
	cout << "------------------------------------------------------------------" << endl;
	cout << "                          STUDENT GRADE REPORT                      " << endl;
	cout << "------------------------------------------------------------------" << endl;
	
	cout << "Name" << "\t\t" << "Student Number" << "\t\t" << "Grade" << "\t\t" << "Average" << endl;
    cout << "------------------------------------------------------------------" << endl; 
	cout << name1 <<" "<< surname2 << "\t" << studentnumber1 << "\t\t" << "\t" << a << " "<< b << " "<< c << "\t" << total1 << endl;
	cout << name2 <<" "<< surname2 << "\t" << studentnumber2 << "\t\t" << "\t" << a2 << " "<< b2 << " "<< c2 << "\t" << total2 << endl;
	cout << "------------------------------------------------------------------" << endl;
	
	if ( total1 > total2 ) {
	 cout << "Top Student : " << name1; 
	 }
	 else {
		cout << "Top Student : " << name2;
		}
		
		
	return 0;
	
}
