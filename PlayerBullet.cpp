#include "PlayerBullet.h"
#include "Novice.h"

void PlayerBullet::Initialize(const Vec3& position){

	position_ = position;
	size_ = { 5.0f,5.0f,1.0f };

}

void PlayerBullet::Update(){

	float speed = 5.0f;

	position_.y -= speed;

	if (position_.y < 0.0f - size_.y) {
		isDead_ = true;
	}


}

void PlayerBullet::Draw(){

	Novice::DrawEllipse((int)position_.x, (int)position_.y, (int)size_.x, (int)size_.y, 0.0f, 0xFFFFFFFF, kFillModeSolid);

}
