#include <iostream>
using namespace std;

int compare(const char* a, const char* b);

int main()
{
  const char* str1 = "abcdd";
  const char* str2 = "abcde";
  
  cout << "Der Vergleich von \"" << str1 << "\" und \"" << str2 << "\" liefert: " << compare(str1, str2) << endl;;
  
  return 0;
}

int compare(const char* a, const char* b) {
  while(true) {
    if (*a == *b) {
      if (*a == 0)
	return 0;
      else
	a++; b++;
    }
    else if (*a < *b)
      return -1;
    else
      return 1;
  };
}
