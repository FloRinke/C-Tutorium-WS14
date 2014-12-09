#include <iostream>
using namespace std;

int main()
{
  int schaltjahre = 0;
  for (int i = 1582; i <= 2014; i++){
    if (i % 4 == 0)
      schaltjahre++;
    if ((i % 100 == 0) && (i % 400 != 0))
      schaltjahre--;
  }
    
  cout << "Seit 1582 gab es " << schaltjahre << " Schaltjahre!" << endl;

  return 0;
}
