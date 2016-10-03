#pragma once
#include "Panel.h"
#include <memory>

class Bat;

namespace ASGE
{
	class Renderer;
}

class ViewportPanel: public UIPanel
{

public:
	virtual void render(std::shared_ptr<ASGE::Renderer> renderer) override;
	void ViewportPanel::setObject(Bat* enemy);
	
private:
	Bat* object = nullptr;
	
};