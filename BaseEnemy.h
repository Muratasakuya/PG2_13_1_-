#pragma once
#include <Novice.h>
#include "Vector2.h"

/// <summary>
/// 敵の基底クラス
/// </summary>
class BaseEnemy {
protected:
	// メンバ変数

	// 速度
	Vector2 velocity_;

	// 生きているかどうかのフラグ 静的メンバ変数
	static bool isAlive_;

	// 色
	unsigned int color_;

	// 生き返るときのクールタイム
	static float coolTime_;

public:
	// メンバ関数

	// 仮想デストラクタ
	virtual ~BaseEnemy() {}
};