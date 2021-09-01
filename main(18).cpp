//Elí Martínez - A01653876
//Daniel Núñez - A01654137 
//Assignment 2: While Cycle

#include <iostream>

using namespace std;

int x, s, i;


int main() 
{ 
  i = 0;
  s = 0;
  cout << "Enter number: ";
  cin >> x;
  while (i < x)
  {
    i++;
    s += i ;

  }
  cout << "The sum of the consecutive numbers is: " << s << endl;
  return 0;
}