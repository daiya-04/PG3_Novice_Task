#pragma once
#include "Vec3.h"

class PlayerBullet{
private:

	Vec3 position_ = {};
	Vec3 size_ = {};

	bool isDead_ = false;

public:

	void Initialize(const Vec3& position);
	void Update();
	void Draw();

	const bool IsDead() const{ return isDead_; }
	const Vec3& GetPos() const{ return position_; }
	const Vec3& GetSize() const{ return size_; }

};

