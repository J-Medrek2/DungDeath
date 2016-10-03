#pragma once
#include <string>
class Bat
{
public:
	Bat() = default;
	~Bat() = default;
	int getHealth() const;
	std::string getHealthAsString() const;
	std::string getRenderString() const;
private:
	int health = 20;
};