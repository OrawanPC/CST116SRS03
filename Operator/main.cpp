// Operator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
	int i0{}, i1{};
	double d0{}, d1{};
	 
	std::cin >> i0 >> i1 >> d0 >> d1;

	
	std::cout << "i0 * i1 == " << i0 * i1 << endl;
	std::cout << "i0 * d0 == " << i0 * d0 << endl;
	std::cout << "d0 * d1 == " << d0 * d1 << endl;
	std::cout << "i0 / i1 == " << i0 / i1 << endl;
	std::cout << "i0 / d0 == " << i0 / d0 << endl;
	std::cout << "d0 / d1 == " << d0 / d1 << endl;
	std::cout << "i0 + i1 == " << i0 + i1 << endl;
	std::cout << "i0 + d0 == " << i0 + d0 << endl;
	std::cout << "d0 + d1 == " << d0 + d1 << endl;
	std::cout << "i0 - i1 == " << i0 - i1 << endl;
	std::cout << "i0 - d0 == " << i0 - d0 << endl;
	std::cout << "d0 - d1 == " << d0 - d1 << endl;
	std::cout << "i0 % i1 == " << i0 % i1 << endl;
	

	return 0;
}

