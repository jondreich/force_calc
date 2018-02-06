#include <iostream>
#include <math.h>

#define G 6.6726e-11

double m1;
double m2;
double r;

int main(){
	std::cout << "Enter the mass of object 1:";
	std::cin >> m1;
	std::cout << "Enter the mass of object 2:";
	std::cin >> m2;
	std::cout << "Enter the distance between the objects:";
	std::cin >> r;
	std::cout << (G*m1*m2)/(pow(r,2)) << std::endl;
}
