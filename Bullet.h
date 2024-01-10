#pragma once
#include <Novice.h>
#include "Vector2.h"

/// <summary>
/// プレイヤーの弾クラス
/// </summary>
class Bullet {
private:
private:
	// メンバ変数

	// 座標
	Vector2 pos_;

	// 速度
	Vector2 velocity_;

	// 半径
	float radius_;

	// 色
	unsigned int color_;
public:
	// メンバ関数

	// コンストラクタ
	Bullet() {

		Init();
	}

	// デストラクタ
	~Bullet() {}

	void Init();
	void Update();
	void Draw();

	/// <summary>
	/// ゲッター セッター
	/// </summary>
	/// <returns></returns>
	Vector2 GetPos() { return pos_; }
	void SetPos(Vector2 pos) { pos_ = pos; }

	float GetRadius() { return radius_; }
};