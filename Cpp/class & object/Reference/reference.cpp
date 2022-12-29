// Reference

#include <iostream>
using namespace std;

class Employee{

	int empId;
	float sal;

	public:
	Employee(int *empId,float *sal){
	this->empId = *empId ;
	this->sal = *sal;	
	}

	void info(){
	cout<<empId<<endl;
	cout<<sal<<endl;
	}

};

int main(){

	int x= 125;
	float salx = 37000.00;
	
	Employee obj1(&x,&salx);
	obj1.info();
	
	return 0;
}
