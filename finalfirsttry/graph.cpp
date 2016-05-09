// Andrew Truong
// Cs150 B
// functions for graph.h

#include "graph.h"

void graph:: setName(string name)
{
	static int stopName=0;
	if(graph[0][stopName].getName() =="")
	{
		graph[0][stopName].m_name=name;
	}
	if(stopName==m_maxNeighs)
	{
		cout<<"Error in Setname, not enough citys"<<endl;
	}
	cout<<graph[0][stopName].getName()<<endl;
	stopName++;
	return;
}

void graph:: setWeight(int weight)
{
	static int stopWeight=0;
		if(neighbors[0][stopWeight].m_weight ==NULL)
		{
			neighbors[0][stopWeight].m_weight=weight;
		}

	if(stopWeight==m_maxNeighs)
	{
		cout<<"Error in SetWeight, not enough citys"<<endl;
	}
		stopWeight++;

	return;
}

void graph:: setMaxNeighs(int a){
	m_maxNeighs=a;
	return;
}

void graph:: makeNeighbors(const int m)
{
	string name;
	int weight;
	int reach;
	
	neighbors=new graph*[m];
	setMaxNeighs(m);
	
	for(int k=0; k < m_maxNeighs; k++)
	{
		cout<<"What is your next location: " <<endl;
		cin>>name;
		
		cin>>reach;
		for(int j=0; j < reach; j++)
		{
			neighbors[k]=new graph[reach];
			neighbors[k][j].setName(name);
			cout<<"What is your next place?"<<endl;
			cin>>name;
			neighbors[k][j].setName(name);
			cout<<"How much will it cost for it to take you from"<<neighbors[k][j].getName()<<
			" to "<<neighbors[k][j].getName()<<endl;
			
			cin>>weight;
			neighbors[k][j].setWeight(weight);
		}
		
	}
	cout<<"your data"<<endl;
	for(int k=0; k < m_maxNeighs; k++)
	{
		cout<<"Name:"<<neighbors[k]->m_name<<endl;
		cout<<"Weight:"<<neighbors[k]->m_weight<<endl;
	}
	
	return;
}
