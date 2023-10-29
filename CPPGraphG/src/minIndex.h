/*
 * minIndex.h
 *
 *  Created on: Oct 29, 2023
 *      Author: rhyme
 */

#ifndef MININDEX_H_
#define MININDEX_H_
#include<climits>

int minIndex(const int *dist,const bool *visited,int n){
	int min=INT_MAX;
	int index=0;

	for(int v=0;v<n;v++){
		if(!visited[v] && dist[v]< min){
			min = dist[v];
			index=v;
		}
	}
	return index;
}





#endif /* MININDEX_H_ */
