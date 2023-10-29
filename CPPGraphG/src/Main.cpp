//============================================================================
// Name        : CPPGraphG.cpp
// Author      : Rhyme
// Version     :
// Copyright   : Your copyright notice
// Description : 

//============================================================================

#include <iostream>
#include<vector>
#include<list>

#include "Edge.h"


//#include "Edge.h"
//#include "minIndex.h"
#include "shortestPaths.h"
#include "populateEdges.h"

using namespace std;
    // Task 1: Analyze the shortest distance problem and Create the Edge Class.
	// Task 2: Create an Adjacency List using a Vector where Each entry is a Linked List
	// Task 3: Add a method to find minimum distance between the source vertex and the other vertices.
	// Task 4: Add the method to find the shortest paths to each vertex from the source vertex.
	// Task 5: Add the method to populate the vector of edges from a file.


int main() {
	cout<< "Welcome to the shortest paths algorithm!" << endl;
	const int SZ=4;
	vector<list<Edge>>edges(SZ);
//	 // New Auburn(0) -> Sand Creek(1)
//	edges[0].push_back(Edge(1,10));
//	 // New Auburn(0) -> Town of Auburn(2)
//	edges[0].push_back(Edge(2,3));
//	 // Sand Creek(1)-> Mud Creek(3)
//	edges[1].push_back(Edge(3,4));
//	 // Sand Creek(1) -> New Auburn(0)
//	edges[1].push_back(Edge(0,10));
//	 // Sand Creek(1) -> Town of Auburn(2)
//	edges[1].push_back(Edge(2,6));
//     // Town of Auburn(2) -> Sand Creek(1)
//	edges[2].push_back(Edge(1,6));
//	 // Town of Auburn(2) -> New Auburn(0)
//	edges[2].push_back(Edge(0,3));
//	 // Mud Creek(3) -> Sand Creek(1)
//	edges[3].push_back(Edge(1,4));
	populatedEdges(edges);
	int d[SZ];

	int vertex=0;
	for(Edge e: edges[vertex]){
		cout<<"vertex:"<<vertex<<"target"<<e.getTarget()
				<<"distance: "<<e.getWeight()<<endl;
	}
	for(int k=0;k < SZ;k++){
		shortestPaths(k,edges,d,SZ);
		for(int i=0;i<SZ;i++){
			cout<<"vertex("<<k<<
					") to vertex ("<<i<<") = "<<d[i]
					<<endl;
		}
	}

}

