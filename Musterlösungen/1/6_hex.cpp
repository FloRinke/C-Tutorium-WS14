#include <iostream>
using namespace std;

int main()
{
  int daysPerYear      = 0x16D; // = (365)_10
  int hoursPerDay      = 0x18;  // = ( 24)_10
  int minutesPerHour   = 0x3C;  // = ( 60)_10
  int secondsPerMinute = 0x3C;  // = ( 60)_10

  int hoursPerYear   = daysPerYear * hoursPerDay;
  int minutesPerYear = hoursPerYear * minutesPerHour;
  int secondsPerYear = minutesPerYear * secondsPerMinute;

  cout << "Ein Jahr hat:" << endl;
  cout << hoursPerYear   << " Stunden" << endl;
  cout << minutesPerYear << " Minuten" << endl;
  cout << secondsPerYear << " Sekunden" << endl;

  return 0;
}
