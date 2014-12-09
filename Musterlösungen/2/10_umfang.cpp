#include <iostream>
#define PI 3.14159265

using namespace std;

int main()
{
  for (int r = 20; r <= 40; r++)
    cout << "r = " << r << " mm,   U = " << (2*PI*r) << " mm" << endl;

  return 0;
}
