
#include <iostream>
#include <vector>

class Employee{

	int empId;
	std::string empName ;

	public:
		Employee(int empId , std::string empName){
			this->empId = empId ;
			this->empName = empName ;
		}

		void info(){
			std::cout<< empId << " : " << empName << std::endl;
		}
};

int main(){

	std::vector<Employee> v ;

	Employee obj1(11,"Rahul");
	Employee obj2(21,"Kanha");
	Employee obj3(31,"Ashish");

	v.push_back(obj1);
	v.push_back(obj2);
	v.push_back(obj3);
	
	std::cout << v.size() << std::endl;             // 3

	for(int i=0 ; i<v.size() ; i++){
		v[i].info();
	}

	return 0 ;
}
