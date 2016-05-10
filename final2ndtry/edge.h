//andrew truong
//cs1510 B

#ifndef EDGE_H
#define EDGE_H
#include <iostream>
using namespace std;

class edge
{
	private:
		string m_name;
		int m_weight;
	public:
		edge(){}
		void createEdge(string name, int weight){
			m_name=name;
			m_weight=weight;
		}
		string getName(){return m_name;}
		int getWeight(){return m_weight;}
};

#endif