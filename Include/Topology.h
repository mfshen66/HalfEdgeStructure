#ifndef TOPOLOGY_H_
#define TOPOLOGY_H_

class Vertex;
class HalfEdge;
class Edge;
class Face;

class Topology
{
public:
	Topology();
	virtual ~Topology() = 0;

	virtual void GetGeometry() = 0;

private:

};

#endif // !TOPOLOGY_H_

