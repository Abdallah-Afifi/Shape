#include <iostream>

using namespace std; 

class Shape
{
public:
	Shape()
	{
		num_sides = 0;
		type = "generic";
	}

	Shape(int num_s, string t)
	{
		num_sides = num_s;
		type = t;
	}

	int get_num_s() {
		return num_sides;
	}

	double area() {
		cout << "generic area function\n";
		return -1.0;
	}

	double perim() {
		cout << "generic perim function\n";
		return -1.0;
	}

	~Shape()
	{
	}


private:

protected:
	int num_sides;
	string type;

};



class triangle : public Shape {
private:

public:
	triangle() {
		num_sides = 3;
		type = "triangle";
	}
	void set_tri_type(string t) {
		tri_type = t;
	}
	string get_tri_type() {
		return tri_type;
	}
	double area() {
		return 1.0;
	}
	double perim() {
		return 1.0;
	}


protected:
	string tri_type;


};
