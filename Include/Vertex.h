#ifndef VERTEX_H_
#define VERTEX_H_

#include "Topology.h"
#include "Point3D.h"

class Vertex : public Topology
{
public:
	Vertex();
	~Vertex();

	/// Data
	HalfEdge* _Support_;
	Point3D* _Point_;

	Point3D* GetPoint();
	void SetPoint(Point3D* iPoint);
private:

};

#endif // !VERTEX_H_


