/**
 * The Foo class.
*/
class Foo {
  public:
  Foo(void);
  Foo(int x, int y);
  ~Foo(void);

  void setX(int value);
  void setY(int value);
  int getX(void);
  int getY(void);

  private:
  int x, y;
}