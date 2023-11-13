#include "Enemy.h"
#include <Novice.h>
#include "Input.h"

void Enemy::Initialize(){

	position_ = { 640.0f,150.0f,0.0f };
	size_ = { 40.0f,40.0f,1.0f };

}

void Enemy::Update(){

	position_.x += speed;

	if (position_.x <= 0.0f + size_.x || position_.x >= 1280.0f - size_.x) {
		speed *= -1.0f;
	}


}

void Enemy::Draw(){

	Novice::DrawEllipse((int)position_.x, (int)position_.y, (int)size_.x, (int)size_.y, 0.0f, 0xF96D2CFF, kFillModeSolid);

}
