#include "Foo.h"

/**
 * Constructor with default values, x=y=0.
*/
Foo::Foo() {
  Foo(0, 0);
}

/**
 * Constructor that allows setting initial values.
 * @param xval Initial value for x.
 * @param yval Initial value for y.
*/
Foo::Foo(int xval, int yval) {
  x = xval;
  y = yval;
}

Foo::~Foo(void) {}

/**
 * Set X.
 * @param value The value to set.
*/
void Foo::setX(int value) {
  x = value;
}

/**
 * Set Y.
 * @param value The value to set.
*/
void Foo::setY(int value) {
  y = value;
}

/**
 * Get X.
 * @return The value.
*/
int Foo::getX(void) {
  return x;
}

/**
 * Get Y.
 * @return The value.
*/
int Foo::getY(void) {
  return y;
}
