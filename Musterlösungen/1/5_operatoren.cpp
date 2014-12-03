/**
  * Binärdarstelung
  * a: 155 = 10011011
  * b:  57 =   111001

  * Umwandelung in Binärzahlen: 

       Gehe z.B. nach folgendem Verfahren vor:
       (1) Teile die Zahl mit Rest durch 2.
       (2) Der Divisionsrest ist die nächste Ziffer (von rechts nach links).
       (3) Falls der (ganzzahlige) Quotient = 0 ist, bist du fertig,
           andernfalls nimm den (ganzzahligen) Quotienten als neue Zahl 
           und wiederhole ab (1).
       
          155 : 2 =  77  Rest: 1
           77 : 2 =  38  Rest: 1
           38 : 2 =  19  Rest: 0
           19 : 2 =   9  Rest: 1
            9 : 2 =   4  Rest: 1
            4 : 2 =   2  Rest: 0
            2 : 2 =   1  Rest: 0
            1 : 2 =   0  Rest: 1
     
          Resultat: 10011011

  * Operatoren
     
     * a << 3 = 10011011000 (= 1240)
     * b >> 1 =       11100 (=   28)
     * a ^ b  =    10100010 (=  162)
     * a & b  =       11001 (=   25) 
     * 1 | b  =      111011 (=   59)
     *    ~b  =    11000110 (= -(0111010) = -58) --> Zweierkomplement

 **/

#include <iostream>
using namespace std;

int main()
{
  int a = 155;
  int b = 57;
  

  cout << "Die Ergebnisse der gesuchten Operationen lauten:" << endl;
  cout << "a << 3 == " << (a << 3) << endl;
  cout << "b >> 1 == " << (b >> 1) << endl;
  cout << "a ^ b  == " << (a ^ b)  << endl;
  cout << "a & b  == " << (a & b)  << endl;
  cout << "a | b  == " << (a | b)  << endl;
  cout << "   ~b  == " << (~b)     << endl;
  
  return 0;
}
