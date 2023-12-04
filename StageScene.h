#pragma once
#include "IScene.h"
#include "InputHandle.h"
#include "Player.h"
#include <memory>

class StageScene : public IScene{
private:

	InputHandle* inputHandle_ = nullptr;
	ICommand* command_ = nullptr;
	std::unique_ptr<Player> player_;

public:

	void Init()override;
	void Update()override;
	void Draw()override;

};

