#pragma once
#include <string>
class GameObject
{
public:
	GameObject() = default;
	virtual ~GameObject() = default;
	virtual std::string getRenderString() const = 0;
};