#include <iostream> 
using namespace std; 
int main() 
{ 
    char c; 
    cout << "Enter a character \n"; 
    cin >> c; 
    switch((c >= 'a'&& c <= 'z') || (c >= 'A' && c <= 'Z')) 	 
    { 	 	
        case 0: 
            cout << c << " is not an Alphabet. \n"; 
            break; 	 	
        case 1: 
            cout << c << " is an Alphabet. \n"; 
            break; 
        default: 	
            cout<<"Invalid input \n"; 
    }
return 0;     
}