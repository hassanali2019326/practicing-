// p4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream hassan("12345.txt");
	hassan.open("12345.txt");
	hassan << "1234" << endl<< "M.Hassan Ali" << endl<< "0987" << endl<<"5000" << endl;
}
