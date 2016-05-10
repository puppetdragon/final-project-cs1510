//andrew truong
//cs1510 B

#ifndef VERTEX_H
#define VERTEX_H
#include "edge.h"
class vertex 
{
	private:
		string m_name;
		int m_degree;
		edge *m_edges;

	public:
	vertex(){}
				
		void initEdges(int neighbors,string name){
			m_name = name;
			m_degree = neighbors;
			m_edges = new edge[neighbors];
		}
		
		void makeEdge();
		string getName(){return m_name;}
		int getDegree(){return m_degree;}
		
		string getEdgeName(int index){
			return m_edges[index].getName();
		};
		
		int getEdgeWeight(int index){
			return m_edges[index].getWeight();
		};
	
};

#endif