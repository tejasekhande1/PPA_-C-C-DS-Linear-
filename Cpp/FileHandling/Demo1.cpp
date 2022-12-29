// Permanently input store karanyasthi.....direct file madhun data vachnyasathi karan terminal varun data vachava nahi lagu mhnun..
// Why File Handling -> Search on google
// Daigram : 12.30 ; 16:19 ; 24:48
// FILE OPEN THROUGH : CONSTRUCTOR -> ONE STREAM USED ONLY READ FOR ONE FILE ; OPEN() -> ONE STREAM USED TO READ MORETHAN ONE FILE  ; 

// using constructor

#include <iostream>
#include <fstream>
using namespace std;

int main(){

	ofstream outfile("c2w.txt");                    // txt file create automatically by this line
	outfile << "Cpp and DS batch";
	outfile.close();

	return 0 ;
}

// ofstream : for write in a file
