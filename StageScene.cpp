#include "StageScene.h"

void StageScene::Init() {

	inputHandle_ = new InputHandle();

	inputHandle_->AssignMoveLeftCommand2PressKeyA();
	inputHandle_->AssignMoveRightCommand2PressKeyD();

	player_ = std::make_unique<Player>();
	player_->Init();

}


void StageScene::Update() {

	command_ = inputHandle_->HandleInput();

	if (command_) {
		command_->Exec(*player_.get());
	}

	player_->Update();
}

void StageScene::Draw() {

	player_->Draw();

}