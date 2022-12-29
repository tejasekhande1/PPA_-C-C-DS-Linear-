// 

#include <iostream>
using namespace std;

class Employee{
	
	int empId ;
	string empName ;

	public :

	Employee(){
	cout<<"Employee Constructor"<<endl;
	}

	Employee( int empId , string empName){
		this -> empId = empId ;
		this -> empName = empName ;
	}

	void empInfo(){
	cout << "empId = " << empId <<endl;
	cout << "empName = " << empName <<endl;
	}

};

class Company{
	
	string cmpName;
	Employee emp ;                               // Employee class cha object banavla ahee 'emp'  or 'obj' asa pan chalto

	public :

	Company(string cmpName , Employee obj){
		this -> cmpName = cmpName ;
		this -> emp = obj ;
	}

	void disp(){
	emp.empInfo();
	}
};
	int main(){
	
		Employee obj1(215 , "Rahul");
		Company obj2("BMC Software",obj1);
		obj2.disp();

		return 0 ;
	}

/* output :
 * Employee Constructor   // Employee emp ha instance variable ahe mhnun ha print hoto.....
 * 215
 * Rahul
