#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(int x, int y)
{
	this->x = x;
	this->y= y;
}
ComplexNumber::ComplexNumber()
{
	set_real(real);
	set_imaginary(imaginary);
}
void ComplexNumber::set_real(int real)
{
	
	this->real = real;
}

void ComplexNumber::set_imaginary(int imaginary)
{
	
	this->imaginary = imaginary;
	
}

 ComplexNumber::ComplexNumber(ComplexNumber k1,  ComplexNumber k2)
{
	
	 sumak1 = k1.x + k2.real ;
	 sumak2 = k1.y + k2.imaginary;
}

 string ComplexNumber::get()
 {
	 stringstream ss;
	 ss << "(" << sumak1 << ", " << sumak2 <<"i"<< ")" << endl;
	 return ss.str();
 }



 

 

