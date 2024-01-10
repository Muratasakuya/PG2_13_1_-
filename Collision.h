#pragma once
#include "Player.h"
#include "Bullet.h"
#include "Enemy1.h"
#include "Enemy2.h"

/// <summary>
/// 当たり判定クラス
/// </summary>
class Collision {
private:
	// メンバ変数

	float x_;
	float y_;

	float distance_;
public:
	// メンバ関数

	// コンストラクタ デストラクタ
	Collision() {

		x_ = 0.0f;
		y_ = 0.0f;
		distance_ = 0.0f;
	}

	~Collision() {}

	void PlayerBullet2Enemy1(Player* player, Enemy1* enemy1);
	void PlayerBullet2Enemy2(Player* player, Enemy2* enemy2);
};