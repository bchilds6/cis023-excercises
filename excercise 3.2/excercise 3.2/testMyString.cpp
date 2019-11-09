//**********************************************************
// Author: D.S. Malik
//
// This program shows how to use the class newString.
//**********************************************************
  
#include <iostream>                                   //Line 1
#include "myString.h"                                 //Line 2

using namespace std;                                  //Line 3
 
int main()                                            //Line 4
{                                                     //Line 5
	// initalize three testing variables
	newString test1 = "version 2 ";
	newString test2 = "electric boogaloo ";
	// test addition
	newString test3 = test1 + test2;
	// output results
	cout << test3 << endl;
	// test concatenation
	test2 += test1;
	// output results
	cout << test2 << endl;
	
	// paue then exit
	system("pause");
    return 0;                                         //Line 30
}                                                     //Line 31