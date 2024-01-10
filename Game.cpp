#include "Game.h"

/// <summary>
/// 初期化
/// </summary>
void Game::Init() {

	player_->Init();
	enemy1_->Init();
	enemy2_->Init();
}

/// <summary>
/// 更新処理
/// </summary>
/// <param name="keys"></param>
/// <param name="preKeys"></param>
void Game::Update(char* keys, char* preKeys) {

	player_->Update(keys, preKeys);

	enemy1_->Update();
	enemy2_->Update();

	// 当たり判定
	collision_->PlayerBullet2Enemy1(player_, enemy1_);
	collision_->PlayerBullet2Enemy2(player_, enemy2_);
}

void Game::Draw() {

	player_->Draw();
	enemy1_->Draw();
	enemy2_->Draw();
}