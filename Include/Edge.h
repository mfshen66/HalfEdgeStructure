#ifndef EDGE_H_
#define EDGE_H_

#include "Topology.h"

class Edge : public Topology
{
public:
	Edge();
	~Edge();

	/// Data
	HalfEdge* _HalfEdge_[2];

private:

};

#endif // !EDGE_H_


