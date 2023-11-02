#include <iostream>
#include <string>

class Point {
	float coordX;
	float coordY;
	char name;
public:
	Point()
	{
		this->coordX = this->coordY = 0;
		this->name = 'A';
	}
	Point(int x, int y, char name)
	{
		this->coordX = x;
		this->coordY = y;
		this->name = name;
	}

	float getX() {
		return this->coordX;
	}
	float getY() {
		return this->coordY;
	}
	char getName() {
		return this->name;
	}

	std::string toStr() {
		return std::string("X: " + std::to_string(this->getX()) + "\tY: " + std::to_string(this->getY()) + "\tName: " +this->name);
	}
	friend std::ostream& operator<<(std::ostream& os, Point& const p) {
		os << p.toStr();
		return os;
	}

	friend std::istream& operator>>(std::istream& is, Point& p) {
		int x, y;
		char name;
		is >> x >> y >> name;
		p = Point(x, y, name); 
		return is;
	}
};
//
//std::ostream& operator<<(std::ostream& os,  Point& const p) {
//	/*os << p.toStr();
//	return os;*/
//
//	return (os << p.toStr());
//}

int main()
{
	Point p(4, 4, 'A');
	std::cout << p;


	Point demoPoint;
	int x, y;
	char name;

	std::cout << "\nEnter params for x: ";
	std::cin >> x;
	std::cout << "Enter params for y: ";
	std::cin >> y;
	std::cout << "Enter name for your demo point: ";
	std::cin >> name;

	demoPoint = Point(x, y, name);

	std::cout << "Demo Point: " << demoPoint << std::endl;

}
