#pragma once
#include "BaseEnemy.h"

/// <summary>
/// 敵2クラス
/// </summary>
class Enemy2:
	// 敵の基底クラスを継承
	public BaseEnemy {
private:
	// このクラスのメンバ変数

	Vector2 pos_;

	float radius_;
public:
	// メンバ関数

	// コンストラクタ
	Enemy2() {

		Init();
	};

	// デストラクタ
	~Enemy2() {}

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

	void SetIsAlive(bool isAlive) { isAlive_ = isAlive; }
};