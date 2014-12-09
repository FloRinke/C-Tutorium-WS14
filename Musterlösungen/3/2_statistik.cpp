#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n = 10;
  vector<float> v(n);

  float min, median, mean;

  cout << "Bitte nacheinander " << n << " Zahlen eingeben!" << endl;
  for (int i = 0; i < n; i++)
    cin >> v[i];

  // Mittelwert
  float sum = 0;
  for (int i = 0; i < n; i++)
    sum += v[i];

  mean = sum / n; 
  
  // Minimum
  vector<float> v_sorted = v;
  sort(v.begin(), v.end());
  min = v[0];
  
  // Median
  if (n % 2 == 1)
    median = v[n / 2];
  else
    median = 0.5 * (v[n / 2] + v[n / 2 - 1]);

  // output
  cout << endl << "Ergebnisse" << endl;
  cout << "Minimum:    " << min  << endl;
  cout << "Mittelwert: " << mean << endl;
  cout << "Median:     " << median   << endl;

  return 0;
}
