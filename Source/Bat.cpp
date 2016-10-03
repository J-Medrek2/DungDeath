#include "Bat.h"

int Bat::getHealth() const
{
	return health;
}

std::string Bat::getHealthAsString() const
{
	return ("" + health);
}

std::string Bat::getRenderString() const
{
	return R"(
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
}