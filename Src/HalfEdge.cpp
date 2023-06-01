#include "HalfEdge.h"

HalfEdge::HalfEdge()
	:_End_(nullptr),
	 _Support_(nullptr),
	_Next_(nullptr), 
	_Oppsite_(nullptr)
{

}

HalfEdge::~HalfEdge()
{
}
