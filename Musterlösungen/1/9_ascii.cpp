#include <iostream>
using namespace std;

int main()
{
  int sum = static_cast<int>('S') + static_cast<int>('i') + 
            static_cast<int>('m') + static_cast<int>('o') + 
            static_cast<int>('n');

  cout << "Die 'Summe' der ASCII Zeichen im Namen Simon ist " << sum << "." << endl;

  return 0;
}

