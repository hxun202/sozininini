#pragma once
class Block
{
protected:
	float hardness;
	float resistance;

public:
	virtual void Describe() = 0;
	virtual ~Block();
};

