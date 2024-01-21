#include<iostream>
using namespace std;
int main()
  {
    // operators
    int x = 5 , y = 3 , a = 3 , n = 2 , w = 8;
    float z = (float)x/y;
    cout << z << "\n";
    a++;
    cout << a << "\n";
    --w;
    cout << w << "\n";
    cout << ++x + y << "\n";
    cout << n++ + y << "\n";
    cout << n << "\n";
    int b = 5 , k = 10 , m = 6;
    b+= 20;  // b = b + 20
    cout << b << "\n";
    k*= m;  // k = k*m
    cout << k << "\n"; 
    short int num1 = 10;
    long long int num2 = 20;
    long double h = 25656.66565;
    cout << sizeof(num1) << "\n"; //2
    cout << sizeof(num2) << "\n"; //8
    cout << sizeof(h) << "\n"; //12
  return 0;  
  }