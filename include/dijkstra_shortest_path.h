#ifndef DIJKSTRA_SHORTEST_PATH__H
#define DIJKSTRA_SHORTEST_PATH__H 

#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

class Graph{
    public:
    // In this implementation, each vertex will be referred to as an integer
    int numVertices;
    int numEdges;
    //I believe it is most efficient to use a vector of priority queues to implement the edge-list
    vector<priority_queue<edge>> edgeList;
    struct edge{
        int cost;
        int destinationVertex;
        //In this case need to provide a way to sort for the priority queue
        bool operator<(const edge& rhs) const;
        //{
        //    return cost < other.cost;
        //} 
    }
}

#endif