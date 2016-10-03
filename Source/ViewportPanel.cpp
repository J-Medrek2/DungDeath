#include "ViewportPanel.h"
#include <Engine/Renderer.h>
#include <string>

const std::string bat_string =
R"(
ENEMY: BAT

         mm
      /^(  )^\  
      \,(..),/      
        V~~V 

"I am a Creature from
the darkest depths of 
your mind!!!"

Health : (100%) ########
)";

void ViewportPanel::render(std::shared_ptr<ASGE::Renderer> renderer)
{
	UIPanel::render(renderer);

	auto bat_x = getPosX() + 20;
	auto bat_y = getPosY() + 2;
	renderer->renderText(bat_string.c_str(), bat_x, bat_y, ASGE::COLOURS::TOMATO);
}
