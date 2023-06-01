#ifndef HALFEDGE_H_
#define HALFEDGE_H_

#include "Topology.h"

class HalfEdge : public Topology
{
public:
	HalfEdge();
	~HalfEdge();

	///Data
	Vertex* _End_;
	Face* _Support_;
	HalfEdge* _Next_;
	HalfEdge* _Oppsite_;
	//Edge* _Edge_;

};

#endif // !HALFEDGE_H

