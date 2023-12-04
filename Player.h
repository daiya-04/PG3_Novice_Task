#pragma once
#include "Vec2.h"


class Player{
private:

	Vec2 pos_;
	Vec2 size_;
	float speed_;

public:

	Player();

	void Init();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();

};

