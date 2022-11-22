/**
 * The Foo class. Now with more comments.
 * A second line of comment.
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