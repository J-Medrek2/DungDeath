#pragma once
#include <Engine/Sprite.h>
#include <string>
#include "GameObject.h"
namespace ASGE {
	class Renderer;
	class Sprite;
}

class Player : public GameObject
{

};
class Player
{
public:

	enum class PlayerClass
	{
		BARBARIAN,
		ROGUE,
		WIZARD
	};

//private:
	Player(PlayerClass c);
	~Player() = default;

	void loadAvatar(std::shared_ptr<ASGE::Renderer> renderer);
	ASGE::Sprite* getAvatar();

	int getHealth() const;
	int getXP() const;
	int getStrength() const;
	int getDexterity() const;
	int getIntellect() const;
	int getLuck() const;
	int getMana() const;

	std::string getHealthAsString() const;
	std::string getManaAsString() const;

private:
	PlayerClass player_class;
	ASGE::Sprite* avatar = nullptr;

	int health = 100;
	int experience = 0;
	int strength = 0;
	int dexterity = 0;
	int intelligence = 0;
	int luck = 0;
	int mana = 0;
};