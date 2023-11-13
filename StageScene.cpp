#include "StageScene.h"
#include <Novice.h>
#include "Input.h"

void StageScene::Initialize(){

	player_ = std::make_unique<Player>();
	player_->Initialize();

	enemy_ = std::make_unique<Enemy>();
	enemy_->Initialize();

}

void StageScene::Update(){

	player_->Update();
	enemy_->Update();

	const std::list<std::unique_ptr<PlayerBullet>>& bullets = player_->GetBullets();

	for (const auto& bullet : bullets) {
		if ((bullet->GetPos() - enemy_->GetPos()).Length() <= bullet->GetSize().x + enemy_->GetSize().x) {
			sceneNo_ = CLEAR;
		}
	}

}

void StageScene::Draw(){

	player_->Draw();
	enemy_->Draw();

}
