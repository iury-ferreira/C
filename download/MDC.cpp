#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	 cout << "digite o primeiro inteiro:";
	 cin >> a;
	 
	 cout << "digite o segundo inteiro:";
	 cin >> b;
	
	  while(a % b != 0 || b % a != 0)
	     {
	 	    c = a % b;
	 	    a = b;
	 	    b = c;
	 	    
	 	    if(a % b == 0)
			 {
			 	
	 	    	break;
	 	     }
     
	     }
	     cout << "o maior divisor " << b;
	  
	 
	  
	return 0;
}