#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	Circle* ptr = new Circle(1, 1);

	cout << "Circle ID:" << ptr->getID() << endl;
	cout << "Circle Area:" << ptr->calculateArea() << endl;
	delete ptr;
}