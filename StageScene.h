#pragma once
#include "IScene.h"
#include <memory>
#include "Player.h"
#include "Enemy.h"

class StageScene : public IScene{
private:

	std::unique_ptr<Player> player_;
	std::unique_ptr<Enemy> enemy_;

public:

	void Initialize()override;
	void Update()override;
	void Draw()override;

};

