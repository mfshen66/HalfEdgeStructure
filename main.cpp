#include "CommonMacDefinition.h"

#include "Point3D.h"
#include "Vertex.h"
#include "HalfEdge.h"


int main()
{
	Point3D p1(0., 0., 0.);
	Point3D p2(1., 0., 0.);
	Point3D p3(2., 3., 0.);

	Vertex* v1, * v2, * v3;
	v1 = new Vertex;
	v1->SetPoint(&p1);
	v2 = new Vertex;
	v2->SetPoint(&p2);
	v3 = new Vertex;
	v3->SetPoint(&p3);

	HalfEdge e1, e2, e3;

	SYS_DELETE_PTR(v1);
	SYS_DELETE_PTR(v2);
	SYS_DELETE_PTR(v3);

	return 0;
}