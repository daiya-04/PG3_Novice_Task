#include "Player.h"
#include <Novice.h>

Player::Player() {}

void Player::Init() {

	pos_ = { 100.0f,100.0f };
	size_ = { 50.0f,50.0f };
	speed_ = 1.0f;

}


void Player::Update() {



}

void Player::Draw() {

	Novice::DrawBox(int(pos_.x - (size_.x / 2.0f)), int(pos_.y - (size_.y / 2.0f)), (int)size_.x, (int)size_.y, 0.0f, 0xFFFFFFFF, kFillModeSolid);

}

void Player::MoveRight() {

	pos_.x += speed_;

}

void Player::MoveLeft() {

	pos_.x -= speed_;

}
