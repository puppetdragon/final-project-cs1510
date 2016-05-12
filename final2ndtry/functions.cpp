//Andrew Truong
//cs1510 B
#include "graph.h"

using namespace std;

void graph:: makeGraph(string current, int start_T, int places)
{
	string name;
	int vertices;
	bool tester;
	string *placeNames= new string [places-1];
	for(int k = 0; k < getSize(); k++)
	{
		cin>>name;

		cin>>vertices;
		
		this->nodes[k].initEdges(vertices,name);
		this->nodes[k].makeEdge();
	}
		cout<< "In "<<current<<", Dr.Zoidberg can reach: "<<endl;
		
		tester=travel(start_T,nodes[0].getName(), placeNames);
		if(tester==false)
		{
			cout<<"nothing :-("<<endl;
		}
		else
		{
			for(int k = 0; k < places-1 ; k++)
			{
				if(placeNames[k].empty()==false)
				cout<<placeNames[k]<<endl;
			}
		}
	delete [] placeNames;
	return;
}

void vertex:: makeEdge()
{
	string placeName;
	int weight;
	
	for(int k = 0; k < getDegree(); k++)
	{
		cin>>placeName;
		cin>>weight;
		this->m_edges[k].createEdge(placeName, weight);
	}
	return;
}

bool ifStored(string array[], int size, string name)
{
	for(int k = 0; k < size; k++)
	{
		if(array[k]==name)
			return true;
	}
	return false;
}
void storeName(string array[], int size, string name)
{
	
	if(ifStored(array,size,name)==false)
	{
		for(int k = 0; k < size; k++)
		{
			if(array[k].empty()==true)
			{
				array[k]=name;
				k = size;
			}
		}
	}
}

bool graph::travel(int token, string vertex, string arrayPlace[]){
	
	bool solve;
	if(token < 0)
	{
		return false;
	}
	else if(token >= 0)
	{
		for(int k = 0; k < getSize(); k++)
		{
			if(nodes[k].getName()==vertex)
			{			
				for(int j=0; j < nodes[k].getDegree(); j++)
				{
					solve=travel(token - nodes[k].getEdgeWeight(j),nodes[k].getEdgeName(j),arrayPlace);
					if(token - nodes[k].getEdgeWeight(j) >= 0)
					{
						storeName(arrayPlace,getSize()-1,nodes[k].getEdgeName(j));
					}
					else if (solve == false)
					{
						return false;
					}
				}	
			}
		}
		return true;
	}
}

