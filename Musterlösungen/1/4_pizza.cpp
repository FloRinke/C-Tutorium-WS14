#include <iostream>
#define PI 3.14159265

using namespace std;

int main()
{
  float z = 50;
  float a = 1.2;
  float volume = PI * z * z * a;

  std::cout << "Die Pizza hat ein Volumen von " << volume << " cm3" << '\n';
  
  return 0;
}
