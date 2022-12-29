#include <iostream>
using namespace std ;
	class biencaps {

	// constructor  : constructor did ot have return type (int,void) and name of constructor same as name of class ; even void also no (void means nothing)
	
		public :
			
		biencaps(){            // special function

			cout<<"This is Constructor "<<endl;
		}

	};

	int main(){
	
		biencaps obj;   //in that case after object creator call wii be to constructor

		return 0 ;
	}



/* some questions on it 
 * constructor used for initialization (member function or non static variable)   imp for interview.
 * if we add constructor then compiler cant add compiler or if we cant add contstructor then compiler automatically added it
 * default constructor is public but manual constructure is should be given in public
    */
