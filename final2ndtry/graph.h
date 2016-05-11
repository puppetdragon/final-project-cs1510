//andrew truong
//cs1510 B

#ifndef GRAPH_H
#define GRAPH_H
#include "vertex.h"

class graph 
{	
	private:
		string m_name;
		int m_size;
		vertex *nodes;
	public:
		graph(){}
		graph(string name, int size)
		{
			m_name=name;
			m_size=size;
			nodes= new vertex[m_size];
			
		}
		void makeGraph(string current,int start_T); 
		string getName(){return m_name;}
		int getSize(){return m_size;}
		bool travel(int token,string vertex);
	
};

bool ifStored(string array[], int size, string name);
void storeName(string array[], int size, string name);
#endif