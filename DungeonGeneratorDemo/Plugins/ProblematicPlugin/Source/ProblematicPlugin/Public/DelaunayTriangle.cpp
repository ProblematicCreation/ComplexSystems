#include "DelaunayTriangle.h"

#include "ProblematicFunctions.h"

DelaunayTriangle::DelaunayTriangle()
	:Vertex1(FVector2D::ZeroVector), Vertex2(FVector2D::ZeroVector), Vertex3(FVector2D::ZeroVector)
{
}

DelaunayTriangle::DelaunayTriangle(FVector2D V1, FVector2D V2, FVector2D V3)
:Vertex1(V1), Vertex2(V2), Vertex3(V3)
{
}

DelaunayTriangle::~DelaunayTriangle()
{
}



bool DelaunayTriangle::InCircle(FVector2D Vertex)
{
	FMatrix TestMatrix
		(
		FPlane(GetVertex1().X, GetVertex1().Y, (GetVertex1().X * GetVertex1().X) + (GetVertex1().Y * GetVertex1().Y), 1.f),
		FPlane(GetVertex2().X, GetVertex2().Y, (GetVertex2().X * GetVertex2().X) + (GetVertex2().Y * GetVertex2().Y), 1.f),
		FPlane(GetVertex3().X, GetVertex3().Y, (GetVertex3().X * GetVertex3().X) + (GetVertex3().Y * GetVertex3().Y), 1.f),
		FPlane(Vertex.X, Vertex.Y, (Vertex.X * Vertex.X) + (Vertex.Y * Vertex.Y), 1.f)
		);

	//is the vertex inside the circle? -- reversing return condition because the points are listed in clockwise order
	float var = TestMatrix.Determinant();
	
	if (var > 0.f)
	{
		return true;
	}
	
	return false;
}

bool DelaunayTriangle::operator==(const DelaunayTriangle& OtherTriangle) const
{
	if (OtherTriangle.GetVertex1() == this->GetVertex1())
	{
		if (OtherTriangle.GetVertex2() == this->GetVertex2())
		{
			if (OtherTriangle.GetVertex3() == this->GetVertex3())
			{
				return true;
			}
		}
	}
	
	return false;
}
