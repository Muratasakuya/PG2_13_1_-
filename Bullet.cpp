#include "Bullet.h"

/// <summary>
/// 初期化
/// </summary>
void Bullet::Init() {

	pos_ = { 640.0f,480.0f };

	velocity_ = { 8.0f,8.0f };

	radius_ = 8.0f;

	color_ = 0xffffffff;
}


/// <summary>
/// 更新処理
/// </summary>
void Bullet::Update() {

	// 上に進む
	pos_.y -= velocity_.y;
}

/// <summary>
/// 描画処理
/// </summary>
void Bullet::Draw() {

	// 円で描画
	Novice::DrawEllipse(
		static_cast<int>(pos_.x), static_cast<int>(pos_.y),
		static_cast<int>(radius_), static_cast<int>(radius_),
		0.0f, color_, kFillModeSolid
	);
}