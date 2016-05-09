// Andrew Truong
// Cs150 B
// functions for graph.h

#include "graph.h"
//Prototypes


void graph:: setName(string name)
{
	int stop=0;
	while(stop < m_maxNeighs)
	{
		if(neighbors[stop].m_name =="")
		{
			neighbors[stop].m_name=name;
		}
		stop++;
	}
	if(stop==m_maxNeighs)
	{
		cout<<"Error in Setname, not enough citys"<<endl;
	}
	cout<<neighbors[0].getName()<<endl;
	return;
}

void graph:: setWeight(int weight)
{
	int stop=0;
	while(stop < m_maxNeighs)
	{
		if(neighbors[stop].m_weight ==NULL)
		{
			neighbors[stop].m_weight=weight;
		}
		stop++;

	}
	if(stop==m_maxNeighs)
	{
		cout<<"Error in Setname, not enough citys"<<endl;
	}
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
	
	neighbors=new graph[m];
	setMaxNeighs(m);
	
	for(int k=0; k < m_maxNeighs; k++)
	{
		cout<<"What is your name: " <<endl;
		cin>>name;
		setName(name);
		
		cout<<"What is your weight: " <<endl;
		cin>>weight;
		setWeight(weight);
		
		
	}
	cout<<"your data"<<endl;
	for(int k=0; k < m_maxNeighs; k++)
	{
		cout<<"Name:"<<neighbors[k].m_name<<endl;
		cout<<"Weight:"<<neighbors[k].m_weight<<endl;
	}
	
	return;
}
