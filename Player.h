#pragma once
#include "Vec3.h"
#include <list>
#include <memory>
#include "PlayerBullet.h"

class Player{
private:

	Vec3 position_{};
	Vec3 size_{};

	float speed = 10.0f;

	std::list<std::unique_ptr<PlayerBullet>> bullets_;

public:

	void Initialize();
	void Update();
	void Draw();

	const Vec3& GetPos() const { return position_; }
	const Vec3& GetSize() const { return size_; }
	const std::list<std::unique_ptr<PlayerBullet>>& GetBullets()const { return bullets_; }

};

