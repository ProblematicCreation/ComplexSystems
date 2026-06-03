#pragma once

class DelaunayEdge;
struct FDelaunayEdge;

class DelaunayTriangle
{
public:
	//--== Constructors ==--
	DelaunayTriangle();
	DelaunayTriangle(FVector2D V1, FVector2D V2, FVector2D V3);
	//--== Destructor ==--
	~DelaunayTriangle();
	//--== Getters ==--
	FVector2D GetVertex1() const { return Vertex1; }
	FVector2D GetVertex2() const { return Vertex2; }
	FVector2D GetVertex3() const { return Vertex3; }
	TArray<FVector2D> GetCollatedVerticies() const { return {Vertex1, Vertex2, Vertex3}; }
	TArray<DelaunayEdge*> GetEdges();
	bool GetIsBad() { return IsBad; }
	//--== Setters ==--
	void SetVertex1(const FVector2D NewVertex) { Vertex1 = NewVertex; }
	void SetVertex2(const FVector2D NewVertex) { Vertex2 = NewVertex; };
	void SetVertex3(const FVector2D NewVertex) { Vertex3 = NewVertex; };
	void SetIsBad(bool NewIsBad) { IsBad = NewIsBad; }
	//--== Standard Functions ==--
	bool InCircle(FVector2D Vertex);
	
	//--== Operator overloads ==--
	bool operator==(const DelaunayTriangle& OtherTriangle) const;

private:
	FVector2D Vertex1;
	FVector2D Vertex2;
	FVector2D Vertex3;

	bool IsBad;
};
