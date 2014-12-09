#include <iostream>
using namespace std;

int main()
{
  
  short x = 1; 
  short max;

  while (x > 0) {
    max = x;
    x++;
  }

  cout << "short hat den Wertebereich: " << x << ".." << max << endl;

  return 0;
}
