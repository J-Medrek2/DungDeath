#include "InputPanel.h"
#include <Engine/Keys.h>
#include <Engine/Renderer.h>
#include <sstream>
#include <algorithm>


void InputPanel::render(std::shared_ptr<ASGE::Renderer> renderer)
{
	std::stringstream ss;
	ss << "> " << str;

	renderer->setFont(0);
	renderer->renderText(ss.str().c_str(), getPosX(), getPosY(), 1.0, ASGE::COLOURS::FORESTGREEN);
}

void InputPanel::input(int key, int action)
{
	if (action == ASGE::KEYS::KEY_PRESS)
	{
		if (key == ASGE::KEYS::KEY_DELETE ||
			key == ASGE::KEYS::KEY_BACKSPACE && 
			str.size() )
		{
			str.pop_back();
		}
		else if (key == ASGE::KEYS::KEY_ENTER)
		{
			str.clear();
		}
		else
		{
			str += key;
			return;
		}
	}
}
