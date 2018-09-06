/* right triangle star pattern
*
**
***
****
*****
*/

#include <iostream>
using namespace std;
int main(){
	for(int i=0 ; i<5 ; i++){	//number of rows are 5 
		for (int j=0 ; j< (i+1); j++){ 
				//number of columns keeps on increasing  
			cout<<"*";
			}		
		cout<< endl;
		}
return 9;
}
