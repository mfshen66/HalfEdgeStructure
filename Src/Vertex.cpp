#include "Vertex.h"

Vertex::Vertex()
	:_Support_(nullptr),
	 _Point_(nullptr)
{

}

Vertex::~Vertex()
{
}

Point3D* Vertex::GetPoint()
{
	return _Point_;
}

void Vertex::SetPoint(Point3D* iPoint)
{
	_Point_ = iPoint;
}
