// Quadratic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;


int main()
{
	 

	double a, b, c;
	std::cout << "Enter the value of a =  "; 
	std::cin >>  a ;
	std::cout << "Enter the value of b =  ";
	std::cin >> b ; 
	std::cout << "Enter the value of c =  ";
	std::cin >> c ;
	std::cout << "   " << endl;

	double square_root = (b *b - 4*a*c,0.5) ;
	
	std::cout << "square_root " << square_root;
	std::cout << "   " << endl;
	
	
	double root1, root2;
	root1 = (-b + pow(b*b - 4 * a*c, 0.5)) / (2 * a);
	root2 = (-b - pow(b*b - 4 * a*c, 0.5)) / (2 * a);

	std::cout << "    " << endl;
	std::cout << root1 << endl;
	std::cout << root2 << endl;
	
	return 0;
}

