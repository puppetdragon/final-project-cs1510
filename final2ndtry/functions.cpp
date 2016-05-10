//Andrew Truong
//cs1510 B
#include "graph.h"

using namespace std;

void graph:: makeGraph()
{
	string name;
	int vertices;
	
	for(int k = 0; k < getSize(); k++)
	{
		cout<<"What is your current location?: "<<endl;
		cin>>name;
		
		cout<<"How many neighbors does it have?: "<<endl;
		cin>>vertices;
		
		this->nodes[k].initEdges(vertices,name);
		this->nodes[k].makeEdge();
	}
	
	return;
}

void vertex:: makeEdge()
{
	string placeName;
	int weight;
	
	for(int k = 0; k < getDegree(); k++)
	{
		cout<<"What is the name of the place that you can travel to?: "<<endl;
		cin>>placeName;
		cout<<"How many tokens does it cost to get there?: "<<endl;
		cin>>weight;
		cout<<endl;
		this->m_edges[k].createEdge(placeName, weight);
	}
	return;
}

bool graph::travel(int token){
	
	
	cout<< this->nodes[0].m_edges[0].getName();
	return false;
	
}

