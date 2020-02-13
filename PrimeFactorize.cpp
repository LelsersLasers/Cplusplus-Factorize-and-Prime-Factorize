#include <iostream>
using namespace std;
int number;
int devised;
int newnum;
int countEm = 0;
int main ()
{
  cout << "Enter a Number to prime factorize: ";
  cin >> number;
  newnum = number;
  for (int numtwo = 2; numtwo <= newnum; ++numtwo)
  {
    devised = newnum / numtwo;
    if (newnum % numtwo == 0)
    {
      
      cout << numtwo;
      newnum = devised;
      countEm = 1;
      while (newnum % numtwo == 0 )
      {
        newnum = newnum/ numtwo;
        countEm = countEm + 1;
      }
      if (countEm != 1) {
        cout << "^" << countEm << endl;
      }
      else {
      cout << endl;
      }
    }
  }
}
