//Andrew Truong
//cs1510 B

#include "graph.h"

int main(){
	
	//Variables
	int testcases=0;
	string current_Loc;		//	current location
	int start_T;			//	amount of tokens at the start
	int amount_City;		//	Amount of Citys
	
	/**programs start**/

	cin>>testcases;
	
	for(int k=0; k < testcases; k++)
	{
		
		cin>>start_T;

		cin>>current_Loc;
		
		cin>>amount_City;
		
		graph A(current_Loc, amount_City);
		A.makeGraph(current_Loc, start_T, amount_City);		
		
		cout<<endl;
	}
	return 0;
}