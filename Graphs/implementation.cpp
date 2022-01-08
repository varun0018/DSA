#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

class Edge
{
public:
    int destinationVertexId; //vertex id of the graph
    int weight;              //distance from one graph node to another
    Edge() {}                //default constructor
    Edge(int destVID, int w) //constructor with parameters
    {
        destinationVertexId = destVID;
        weight = w;
    }
    void setEdgeValues(int destVID, int w)
    {
        destinationVertexId = destVID;
        weight = w;
    }
    void setWeight(int w)
    {
        weight = w;
    }
    int getDestinationVertexID()
    {
        return destinationVertexId;
    }
    int getWeight()
    {
        return weight;
    }
};

class vertex
{
public:
    int state_id;
    string state_name;
    list<Edge> edgeList;
    vertex(int id, string sname)
    {
        state_id = id;
        state_name = sname;
    }
    int getStateId()
    {
        return state_id;
    }
    string getStateName()
    {
        return state_name;
    }
    void setId(int id)
    {
        state_id = id;
    }
    void setStateName(string sname)
    {
        state_name = sname;
    }
};

int main()
{
}