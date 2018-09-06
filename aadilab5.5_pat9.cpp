/* hollow right triangle star pattern
*
**
* *
*  *
*****
*/

#include <iostream>
using namespace std;
int main(){
	for(int i = 0; i<5 ; i++){
		//1st , 2nd and the last line has allthe stars
		if (i == 0 or i == 1 or i == 4){ 
			for(int j=0 ; j < (i+1) ; j++){
				cout<<"*";
			}
			cout << endl;
		}
		//conditions for the rest lines 
		else{
			//conditions for the star in the first the lines
			cout<<"*";
			//conditions for the lines with spaces 
			for(int j= 0; j<(i-1) ; j++){
			cout<<" ";
			}
			//conditions for the last stars
			cout<<"*";
			cout<<endl;
			}
		}
return 8;
}
