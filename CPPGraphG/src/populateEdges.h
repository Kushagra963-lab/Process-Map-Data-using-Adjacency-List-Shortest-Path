/*
 * populateEdges.h
 *
 *  Created on: Oct 14, 2020
 *      Author: Rhyme
 */

#ifndef POPULATEEDGES_H_
#define POPULATEEDGES_H_
#include <iostream>
#include <list>
#include <vector>
#include <map>

#include <fstream>
#include <sstream>

using namespace std;

void populateEdges(vector<list<Edge>>&edges) {
	map<string, int> townIMap;
	int tindex = 0;

	string header;
	int size = 0;
	// Task 5 file reading
	{
		string line;
		ifstream file("towns.csv");
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << '\n';
			}
			file.close();
		}

		else {
			cout << "Error opening file";
		}
	}
	// Task3 split
	string line;
	ifstream file("towns.csv");
	if (file.is_open()) {
		getline(file, header);
		while (getline(file, line)) {
			cout << line << '\n';
			std::stringstream sstr(line);
			std::string token;

			string toks[3];
			char delim = ',';

			int i = 0;

			while (std::getline(sstr, token, delim)) {
				//data.push_back(token);
				toks[i] = token;
				i++;
			}
			// the C++ 11 way to read from array.
			for (const string &token : toks) {
				cout << "value of token: " << token << endl;

			} // end for
			// associate a town with an index
			if (townIMap.find(toks[0]) == townIMap.end()){
				townIMap.insert(make_pair(toks[0], tindex++));
			}
			if (townIMap.find(toks[1]) == townIMap.end()){
				townIMap.insert(make_pair(toks[1], tindex++));
			}
			int vertex=townIMap.find(toks[0])->second;
			int target=townIMap.find(toks[1])->second;
			edges[vertex].push_back(Edge(target,stoi(toks[2])));
			edges[target].push_back(Edge(vertex,stoi(toks[2])));
			

			size++;
		}	        // end while getline
		cout << "size of file is " << size << endl;
		file.close();
	}	        // end if

	else {
		cout << "Error opening file " << endl;
	}
 
}


#endif /* POPULATEEDGES_H_ */
