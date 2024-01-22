#include<iostream> 
using namespace std; 
int main() 
{ 
      
    int n1,n2; 	
    cout<<"enter n1 and n2 \n"; 	
    cin>>n1>>n2; 	 	
    switch(n1>n2) 	
    { 		
        case 0:   // case 0 = الشرط متحققش			
              cout<<n2<<" is greater \n"; 			
              break; 		
        case 1:   // case 1 = الشرط تحقق			
              cout<<n1<<" is greater \n"; 			
              break; 		
        default: 			
              cout<<"invalid \n"; 	
    } 
return 0;    
}