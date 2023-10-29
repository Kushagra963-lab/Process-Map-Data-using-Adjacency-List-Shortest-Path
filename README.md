# Process-Map-Data-using-Adjacency-List-Shortest-Path
**Author:** Kushagra
**Date:** Augest 2023

## Description

This C++ program demonstrates the shortest paths algorithm using an adjacency list representation of a graph. It includes classes for representing edges and methods for finding the shortest paths between vertices in a graph.

## Table of Contents

- [Getting Started](#getting-started)
- [Dependencies](#dependencies)
- [Usage](#usage)
- [Notes](#notes)

## Getting Started

To compile and run the program, follow these steps:

1. Make sure you have a C++ compiler installed.
2. Clone or download this repository.
3. Compile the program using the following command:

g++ -o main.cpp


4. Run the executable:

./main


## Dependencies

This project uses standard C++ libraries, and it does not require any external dependencies.

## Usage

You can modify the `towns.csv` file to represent your own graph. The format of the CSV file should be as follows:

Town, Destination, Distance
New Auburn, Sand Creek, 10
New Auburn, Town of Auburn, 3
Town of Auburn, Sand Creek, 6
Sand Creek, Mud Creek, 4

The program reads this CSV file to populate the graph's edges. It then computes and displays the shortest paths between vertices.

## Notes

- This program was created for educational purposes and serves as a simple example of finding shortest paths in a graph.
