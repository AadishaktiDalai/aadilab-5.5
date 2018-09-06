/*hollow square pattern
*****
*   *
*   *
*   *
*****
*/   
#include <iostream>
using namespace std;
int main(){int b , a;
	for (int a = 0; a < 5 ; a++){
		//all the stars should be printed for 1st and the last row
		if ( a == 0 or  a == 4 ){
			for (  b = 0 ; b < 5 ; b++){
				cout<<"*";
			}
		}
		else{
			//star at 1st column
			cout<<"*";
			//spaces at the rest places 
			for(int b = 0 ; b < 3 ;b++){
			cout<<" ";
			}
			//star at the lat column
			cout<<"*";
		}
		cout<<endl;
	}
return 0;
} 

                                    
