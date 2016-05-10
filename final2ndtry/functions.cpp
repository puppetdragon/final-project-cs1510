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

bool graph::travel(int token, int vertex, int edge){
	
	if(token <= 0)
		return false;
	/*else if (token - nodes[vertex]->edge[edge].getWeight()> 0)
	{
		if(edge < nodes[vertex].getDegree()-1)
		{		
			cout<<nodes[vertex]->edge[edge].getName()<<endl;
			travel(token - nodes[vertex]->edge[edge].getWeight(),vertex, edge+1);
		}
		else if(vertex < getSize()-1)
		{
			cout<<nodes[vertex]->edge[edge].getName()<<endl;
			travel(token - nodes[vertex]->edge[edge].getWeight(),vertex+1, edge);
		}
	}*/
	
	else if (token - nodes[vertex].getEdgeWeight(edge)> 0)
	{
		if(edge < nodes[vertex].getDegree()-1)
		{		
			cout<<nodes[vertex].getEdgeName(edge)<<endl;
			travel(token - nodes[vertex].getEdgeWeight(edge),vertex, edge+1);
		}
		else if(vertex < getSize()-1)
		{
			cout<<nodes[vertex].getEdgeName(edge)<<endl;
			travel(token - nodes[vertex].getEdgeWeight(edge),vertex+1, edge);
		}
		return true;
	}
	/*
	http://web.cecs.pdx.edu/~sheard/course/Cs163/Graphics/graph1.png, going to 3, went upwards
	1. look at neighbors,5
	2. go to first neighbor, at 5
	3. Check weight of neighbor, can go? if not check other neighbor
	4. check neighbor, go to 4
	5. go to neighbor, at 4
	6. check weight, can go to 4? if not go back and check other neighbor
	7. Check neighbor, go to 6
	8. go to neighbor,at 6
	9. check weigh, can go? If not check neighbor
	10. 
	*/
	
	
	return false;
}

