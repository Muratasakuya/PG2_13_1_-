#pragma once
#include <Novice.h>
#include "Vector2.h"
#include "Bullet.h"

/// <summary>
/// プレイヤークラス
/// </summary>
class Player {
private:
	// メンバ変数

	// 座標
	Vector2 pos_;

	// 速度
	Vector2 velocity_;

	// 半径
	Vector2 radius_;

	// 色
	unsigned int color_;

	// 弾を撃っているかのフラグ
	bool isShot_;

	Bullet* bullet_;
public:
	// メンバ関数

	// コンストラクタ
	Player() {

		// インスタンスの作成
		bullet_ = new Bullet();

		Init();
	}

	// デストラクタ
	~Player() {

		// 開放
		delete bullet_;
	}

	void Init();
	void Move(char* keys);
	void Update(char* keys, char* preKeys);
	void Draw();

	/// <summary>
	/// ゲッター セッター
	/// </summary>
	/// <returns></returns>
	Vector2 GetBulletPos() { return bullet_->GetPos(); }
	void SetBulletPos(Vector2 bulletPos) { bullet_->SetPos(bulletPos); }

	float GetBulletRadius() { return bullet_->GetRadius(); }
};