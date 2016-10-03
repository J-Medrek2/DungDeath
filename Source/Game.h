#pragma once

#include <Engine/OGLGame.h>


class Player;
class UIPanel;
class Bat;
struct Font;

class DungeonDeathGame:
	public ASGE::OGLGame
{
public:
	DungeonDeathGame();
	~DungeonDeathGame();

	// Inherited via Game
	virtual bool run() override;

	// Inherited via OGLGame
	virtual bool init();
	virtual void drawFrame();

private:
	UIPanel* panels[5];
	Player*	 player_one;
};

