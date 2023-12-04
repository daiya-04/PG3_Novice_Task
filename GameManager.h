#pragma once
#include <memory>
#include <array>
#include "IScene.h"
#include "StageScene.h"

class GameManager{
private:

	std::array<std::unique_ptr<IScene>, 1> sceneArr_;

	int currentSceneNo_;
	int preSceneNo_;

public:

	GameManager();
	~GameManager();

	int Run();

};

