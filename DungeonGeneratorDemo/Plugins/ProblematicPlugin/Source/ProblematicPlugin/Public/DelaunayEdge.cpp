#include "DelaunayEdge.h"

DelaunayEdge::DelaunayEdge()
	:StartPoint(FVector2D::ZeroVector), EndPoint(FVector2D::ZeroVector), IsBad(false)
{
}

DelaunayEdge::DelaunayEdge(FVector2D Start, FVector2D End)
	:StartPoint(Start), EndPoint(End), IsBad(false)
{
}

DelaunayEdge::~DelaunayEdge()
{
}

bool DelaunayEdge::operator==(const DelaunayEdge& Other) const
{
	return (Other.StartPoint == StartPoint && Other.EndPoint == EndPoint) || (Other.StartPoint == EndPoint && Other.EndPoint == StartPoint);
}

bool DelaunayEdge::AlmostEqual(DelaunayEdge* Edge1, DelaunayEdge* Edge2)
{
	// edge1.start, edge2.start && edge1.end && edge2.end
	// or
	// edge1.start, edge2.end && edge1.end, edge2.start
	return (AlmostEqualVertexToABS(Edge1->GetStartPoint(), Edge2->GetStartPoint()) && AlmostEqualVertexToABS(Edge1->GetEndPoint(), Edge2->GetEndPoint()))
		|| (AlmostEqualVertexToABS(Edge1->GetStartPoint(), Edge2->GetEndPoint()) && AlmostEqualVertexToABS(Edge1->GetEndPoint(), Edge2->GetStartPoint()));
}

bool DelaunayEdge::AlmostEqualABS(float X, float Y)
{
	return (FMath::Abs(X - Y) <= FLT_EPSILON * FMath::Abs(X + Y) * 2) || (FMath::Abs(X - Y) < FLT_MIN);
}

bool DelaunayEdge::AlmostEqualVertexToABS(FVector2D Vert1, FVector2D Vert2)
{
	return (AlmostEqualABS(Vert1.X, Vert2.X)) && (AlmostEqualABS(Vert1.Y, Vert2.Y));
}
