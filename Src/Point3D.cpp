#include "Point3D.h"

Point3D::Point3D()
{
	_Coord_[0] = 0.;
	_Coord_[1] = 0.;
	_Coord_[2] = 0.;
}

Point3D::Point3D(double iX, double iY, double iZ)
{
	_Coord_[0] = iX;
	_Coord_[1] = iY;
	_Coord_[2] = iZ;
}

Point3D::~Point3D()
{
}
