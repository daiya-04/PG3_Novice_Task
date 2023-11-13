#pragma once
#include "Vec3.h"

class Enemy{
private:

	Vec3 position_{};
	Vec3 size_ = {};

	float speed = 5.0f;

public:

	void Initialize();
	void Update();
	void Draw();

	const Vec3& GetPos() const { return position_; }
	const Vec3& GetSize() const { return size_; }

};

