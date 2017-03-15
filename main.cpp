#include <iostream>

//C++14
auto f() noexcept {
  return "Hello world\n";
}

int main() 
{
  char a[10];
  a[10] = 0;
  std::cout << a[0] << f() << '\n';
}
