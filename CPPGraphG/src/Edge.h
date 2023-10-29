/*
 * Edge.h
 *
 *  Created on: Oct 29, 2023
 *      Author: rhyme
 */

#ifndef EDGE_H_
#define EDGE_H_

class Edge {
public:
	Edge();
	Edge(int target,int weight);
	virtual ~Edge();

	int getTarget() const {
		return target;
	}

	int getWeight() const {
		return weight;
	}

private:\
    int target;
	int weight;
};

#endif /* EDGE_H_ */
