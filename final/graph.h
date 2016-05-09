// Andrew Truong
// Cs1510 B
// Header

#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
using namespace std;

class graph{
	
	private:
		string m_name;
		int m_weight;
		int m_maxNeighs;
		graph *neighbors;
	public:
		graph(){
			m_name="";
			m_weight=NULL;
			m_maxNeighs=0;
		}
		
		void makeNeighbors(const int m);
		void setName(string name);
		void setWeight(int weight);
		void setMaxNeighs(int a);
		string getName(){return m_name;};
		

};

#endif