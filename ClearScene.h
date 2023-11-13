#pragma once
#include "IScene.h"

class ClearScene : public IScene{
private:



public:

	void Initialize()override;
	void Update()override;
	void Draw()override;

};

