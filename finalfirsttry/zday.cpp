// Andrew Truong
// Cs1510 B
// Main file

#include "graph.h"
int main()
{
	//Variables
	int testcases=0;
	string C_location;		//	current location
	int S_tokens;			//	amount of tokens at the start
	int amount_City;		//	Amount of Citys
	graph A;
	/**programs start**/
	
	cout<<endl;
	cout<<endl;
	cout<<"how many cases will there be?: "<<endl;
	cin>>testcases;
	
	for(int k=0; k < testcases; k++)
	{
		
		cout<<endl;
		cout<<"How many coins do you have?"<<endl;
		cin>>S_tokens;
		
		cout<<"What is your current location?"<<endl;
		cin>>C_location;
		
		cout<<"how many places are in this city?"<<endl;
		cin>>amount_City;
		
		A.makeNeighbors(amount_City);
		
	}
	

	return 0;
}
