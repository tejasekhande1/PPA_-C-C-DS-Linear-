// malloc ----- void* malloc(size_t) ; memory on heap
// void pointer ----- generic pointer
// void pointer dereference karaycha asel tr tyala typecasting lkaravi lagate

#include <iostream>
using namespace std;

int main(){

	int x = 10 ;
	void *ptr = &x ;

	cout<< ptr <<endl;
	cout<< *(int*)ptr <<endl;           // typecasting

	return 0 ;
}
