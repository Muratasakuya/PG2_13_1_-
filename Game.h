#pragma once
#include "Player.h"
#include "Enemy1.h"
#include "Enemy2.h"
#include "Collision.h"

/// <summary>
/// ゲームクラス
/// </summary>
class Game {
private:
	// メンバ変数

	Player* player_;

	Enemy1* enemy1_;
	Enemy2* enemy2_;

	Collision* collision_;
public:
	// メンバ関数

	// コンストラクタ
	Game() {

		// インスタンスの作成
		player_ = new Player();

		enemy1_ = new Enemy1();
		enemy2_ = new Enemy2();

		collision_ = new Collision();
	}

	// デストラクタ
	~Game() {

		// 開放
		delete player_;
		delete enemy1_;
		delete enemy2_;
		delete collision_;
	}

	void Init();
	void Update(char* keys, char* preKeys);
	void Draw();
};