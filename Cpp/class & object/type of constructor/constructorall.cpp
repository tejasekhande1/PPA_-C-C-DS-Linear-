// Best for Interview 

#include <iostream>
using namespace std ;

	class onlineLearning {
		int numEmp = 0 ;
		string cmpName ;
		string founder ;

		public :
		
		onlineLearning(){
			cout<<"Indias Top Online Learning Platform"<<endl;
		}

		onlineLearning(string cmpName , string founder , int numEmp){
		this -> cmpName = cmpName ;
		this -> founder = founder ;
		this -> numEmp = numEmp ;
		}

		void disp(){
		cout << "Company Name : "<< cmpName <<endl;
		cout << "Founder Name : "<< founder <<endl;
		cout << "Employee Number : "<< numEmp <<endl;

		
		}

	};

	int main(){

		onlineLearning obj1 ;
//		obj1.disp();
		onlineLearning obj2("Byjus","Raveedran Byjus",7900);
		obj2.disp();
		onlineLearning *obj3 = new onlineLearning("Unacadamy","Roman Saini",2900);
		obj3->disp();

	
	return 0 ;
}
