// MyExecRefsDll.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "MathFuncsDll.h"

using namespace std;

int main()
{
	double a = 7.4;
	int b = 99;

	cout << "a + b = " <<
		MathFuncs::MyMathFuncs::Add(a,b) << endl;
	cout << " a - b = " <<
		MathFuncs::MyMathFuncs::Subtract(a,b) << endl;
	cout << "a * b = " <<
		MathFuncs::MyMathFuncs::Multiply(a,b) << endl;
	cout << "a / b = " <<
		MathFuncs::MyMathFuncs::Divide(a,b) << endl << endl;

	system("pause");
	return 0;
}