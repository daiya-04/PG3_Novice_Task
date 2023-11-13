#include "Player.h"
#include <Novice.h>
#include "Input.h"

void Player::Initialize(){

	position_ = { 640.0,500.0,0.0f };
	size_ = { 30.0f,30.0f,1.0f };

}

void Player::Update(){

	bullets_.remove_if([](const std::unique_ptr<PlayerBullet>& bullet) {
		if (bullet->IsDead()) {
			return true;
		}
		return false;
	});

	if (Input::GetInstance()->PushKey(DIK_A) || Input::GetInstance()->PushKey(DIK_LEFT)) {
		position_.x -= speed;
	}
	if (Input::GetInstance()->PushKey(DIK_D) || Input::GetInstance()->PushKey(DIK_RIGHT)) {
		position_.x += speed;
	}

	if (Input::GetInstance()->TriggerKey(DIK_SPACE)) {
		PlayerBullet* newBullet = new PlayerBullet();
		newBullet->Initialize(position_);

		bullets_.push_back(std::unique_ptr<PlayerBullet>(newBullet));
	}

	position_.x = min(position_.x, 1280.0f - size_.x);
	position_.x = max(position_.x, 0.0f + size_.x);

	for (const auto& bullet : bullets_) {
		bullet->Update();
	}

}

void Player::Draw(){

	Novice::DrawEllipse((int)position_.x, (int)position_.y, (int)size_.x, (int)size_.y, 0.0f, 0xFFFFFFFF, kFillModeSolid);

	for (const auto& bullet : bullets_) {
		bullet->Draw();
	}

}
