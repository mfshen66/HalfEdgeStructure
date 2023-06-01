#ifndef POINT3D_H_
#define POINT3D_H_

#include "GeoObject.h"

class Point3D : public GeoObject
{
public:
	Point3D();
	Point3D(double iX, double iY, double iZ);
	~Point3D();
	
	inline void GetCoord(double oCoord[]);
	inline void GetX(double &oX);
	inline void GetY(double &oY);
	inline void GetZ(double &oZ);

private:
	double _Coord_[3];

};

/**
 * @brief 获取点坐标
 * @param oCoord 
*/
inline void Point3D::GetCoord(double oCoord[])
{
	oCoord[0] = _Coord_[0];
	oCoord[1] = _Coord_[1];
	oCoord[2] = _Coord_[2];
}

inline void Point3D::GetX(double& oX)
{
	oX = _Coord_[0];
}
inline void Point3D::GetY(double& oY)
{
	oY = _Coord_[1];
}
inline void Point3D::GetZ(double& oZ)
{
	oZ = _Coord_[2];
}

#endif // !POINT3D_H_


