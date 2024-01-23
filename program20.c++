#include<iostream>
using namespace std;
void swap (int &x , int &y);
int main()
  {
   int a , b;
   cout << "enter two number \n";
   cin >> a >> b;
   swap (a , b);
   cout << "new value of a is " << a << "\n";
   cout << "new value of b is " << b << "\n";  
  }
void swap (int &x , int &y)
{
    int swap = x;
    x = y; 
    y = swap;
}  