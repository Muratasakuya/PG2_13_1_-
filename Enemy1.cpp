#include "Enemy1.h"

/// <summary>
/// 初期化
/// </summary>
void Enemy1::Init() {

	pos_ = { 800.0f,350.0f };

	velocity_ = { 5.0f,5.0f };

	radius_ = 16.0f;

	// 赤
	color_ = 0xff0000ff;
}

/// <summary>
/// 更新処理
/// </summary>
void Enemy1::Update() {

	if (isAlive_) {

		pos_.x -= velocity_.x;
		if (pos_.x >= 1280.0f - radius_ || pos_.x <= 0.0f + radius_) {

			velocity_.x *= -1.0f;
		}
	}

	if (!isAlive_) {

		coolTime_--;
	}
	if (coolTime_ <= 0.0f) {

		isAlive_ = true;
		coolTime_ = 120.0f;
	}
}

/// <summary>
/// 描画処理
/// </summary>
void Enemy1::Draw() {

	// 生きているときのみ描画
	if (isAlive_) {

		// 円で描画
		Novice::DrawEllipse(
			static_cast<int>(pos_.x), static_cast<int>(pos_.y),
			static_cast<int>(radius_), static_cast<int>(radius_),
			0.0f, color_, kFillModeSolid
		);
	}
}