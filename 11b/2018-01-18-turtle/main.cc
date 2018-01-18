
#include "turtle.hh"

#include <iostream>
using namespace std;

int main() {
	Color color(0.3, 0.4, 0.2);
	PSTurtle t(500, 500);
	t.setup();
	t.pensize(2.5);
	t.pencolor(color);
	t.set_pendown(true);
	t.forward(100)
		.left(90)
		.forward(100)
		.left(90)
		.forward(100)
		.left(90)
		.forward(100)
		.set_pendown(false)
		.right(45)
		.forward(100)
		.set_pendown(true)
		.backward(200)
		.right(90)
		.backward(200)
		.right(90)
		.backward(200)
		.right(90)
		.backward(200);

	return 0;
}

