#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class ComplexNumber
{
private:
	int real;
	int imaginary;
	int x;
	int y;
	int sumak1;
	int sumak2;
public:
	ComplexNumber(int x, int y);
	ComplexNumber();
	void set_real(int real);
	void set_imaginary(int imaginary);
	ComplexNumber(ComplexNumber k1, ComplexNumber k2);
	string get();





};

