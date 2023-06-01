#ifndef BODY_H_
#define BODY_H_

#include "Topology.h"

#include <vector>

class Body : public Topology
{
public:
	Body();
	~Body();

private:
	std::vector<Vertex*> vertices;
};

#endif // !BODY_H_

