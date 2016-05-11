//Andrew Truong
//cs1510 B
#include "graph.h"

using namespace std;

void graph:: makeGraph(string current, int start_T)
{
	string name;
	int vertices;
	bool tester;
	
	for(int k = 0; k < getSize(); k++)
	{
		cout<<"What is your current location?: "<<endl;
		cin>>name;
		
		cout<<"How many neighbors does it have?: "<<endl;
		cin>>vertices;
		
		this->nodes[k].initEdges(vertices,name);
		this->nodes[k].makeEdge();
	}
		cout<< "In "<<current<<", Dr.Zoidberg can reach: "<<endl;
		tester=travel(start_T,nodes[0].getName());
		if(tester==false)
		{
			cout<<"nothing :-("<<endl;
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

bool graph::travel(int token, string vertex){
	
	string *name=new string[getSize()-1];
	bool solve;
	if(token < 0)
		return false;
	
	else 
	{
		for(int k = 0; k < getSize(); k++)
		{
			if(nodes[k].getName()==vertex)
			{			
				for(int j=0; j < nodes[k].getDegree(); j++)
				{
					if(token - nodes[k].getEdgeWeight(j) >= 0)
					{
						storeName(name,getSize()-1,nodes[k].getEdgeName(j));
						solve=travel(token - nodes[k].getEdgeWeight(j),nodes[k].getEdgeName(j));
						if(solve)
						{
							for(int i = 0; i < getSize()-1; i++)
							{
								if(name[i].empty()==false)
								{
									cout<<"at name["<<i<<"]=";
									cout<<name[i]<<endl;
								}
							}
						}
					}
				}	
			}
			//cout<<"current k val: "<<k<<" name of node at k: "<<nodes[k].getName()<<" name of vertex: "<<vertex<<endl;
		}
		return true;
	}
	
}

