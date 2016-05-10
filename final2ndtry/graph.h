//andrew truong
//cs1510 B

#ifndef GRAPH_H
#define GRAPH_H
#include "vertex.h"

class graph 
{	
/*
graph to have:
name
size
how many nodes it'll hold
*/
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
		void makeGraph(); 
		string getName(){return m_name;}
		int getSize(){return m_size;}
		bool travel(int token);
		~graph(){
			delete nodes;
		}
};



#endif