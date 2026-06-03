#pragma once

class DelaunayEdge
{
public:
	DelaunayEdge();
	DelaunayEdge(FVector2D Start, FVector2D End);
	~DelaunayEdge();
	//--== getters ==--
	FVector2D GetStartPoint() { return StartPoint; }
	FVector2D GetEndPoint() { return EndPoint; }
	bool GetIsBad() { return IsBad; }
	float GetDistance() { return FVector2D::Distance(StartPoint, EndPoint); }
	//--== setters ==--
	void SetStartPoint(FVector2D Vec) { StartPoint = Vec; }
	void SetEndPoint(FVector2D Vec) { EndPoint = Vec; }
	void SetIsBad(bool Val ) { IsBad = Val; }
	//--== operators ==--
	bool operator==(const DelaunayEdge& Other) const;

	static bool AlmostEqual(DelaunayEdge* Edge1, DelaunayEdge* Edge2);
private:
	static bool AlmostEqualABS(float X, float Y);
	static bool AlmostEqualVertexToABS(FVector2D Vert1, FVector2D Vert2);
	FVector2D StartPoint;
	FVector2D EndPoint;

	bool IsBad;
};
