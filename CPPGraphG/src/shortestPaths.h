/*
 * shortestPaths.h
 *
 *  Created on: Oct 29, 2023
 *      Author: rhyme
 */

#ifndef SHORTESTPATHS_H_
#define SHORTESTPATHS_H_
#include<climits>
#include<vector>
#include<list>
#include "Edge.h"
#include "minIndex.h"
using namespace std;

void shortestPaths(int startVertex, const vector<list<Edge>> &edges,int *distance, int n){
	bool visited[n];
	for(int i=0;i< n;i++){
		visited[i]= false;
		distance[i]=INT_MAX;
	}
	distance[startVertex]=0;
	for(int i=0;i<n;i++){
		int u=minIndex(distance,visited,n);
		visited[u]=true;
		for(Edge e:edges[u]){
			int target=e.getTarget();
			int distSum=distance[u] + e.getWeight();
			distance[target]=min(distance[target],distSum);
		}
	}
}





#endif /* SHORTESTPATHS_H_ */
