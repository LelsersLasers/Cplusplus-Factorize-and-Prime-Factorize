#include <iostream>
using namespace std;
int number;
int newnum;
int divised;
int numtwo = 1;
int main() 
{
  cout << "Enter Number to be factored:" << endl;
  cin >> number;
  newnum = number;
  for (numtwo = 1; numtwo < newnum; ++numtwo)
  {
    divised = number / numtwo;
    if (number % numtwo == 0)
    {
      cout << numtwo << " and " << divised << endl;
      newnum = divised;
    }
  }
  return 0;
}
