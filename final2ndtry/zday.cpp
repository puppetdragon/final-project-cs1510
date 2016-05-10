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
	
	cout<<endl;
	cout<<endl;
	cout<<"how many cases will there be?: "<<endl;
	cin>>testcases;
	
	for(int k=0; k < testcases; k++)
	{
		
		cout<<endl;
		cout<<"How many coins do you have?"<<endl;
		cin>>start_T;
		
		cout<<"What is your current location?"<<endl;
		cin>>current_Loc;
		
		cout<<"how many places are in this city?"<<endl;
		cin>>amount_City;
		
		graph A(current_Loc, amount_City);
		A.makeGraph();
		
		cout<< "In "<<current_Loc<<", Dr.Zoidberg can reach: "<<endl;
		A.travel(start_T);
		
	}
	return 0;
}