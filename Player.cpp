#include "Player.h"

/// <summary>
/// 初期化
/// </summary>
void Player::Init() {

	pos_ = { 640.0f,480.0f };

	velocity_ = { 5.0f,5.0f };

	radius_ = { 16.0f,16.0f };

	color_ = 0xffffffff;

	isShot_ = false;

	// 弾の初期化
	bullet_->Init();
}

/// <summary>
/// 動き
/// </summary>
void Player::Move(char* keys) {

	if (keys[DIK_D]) {

		pos_.x += velocity_.x;
	} else if (keys[DIK_A]) {

		pos_.x -= velocity_.x;
	}
	if (keys[DIK_W]) {

		pos_.y -= velocity_.y;
	} else if (keys[DIK_S]) {

		pos_.y += velocity_.y;
	}
}

/// <summary>
/// 更新処理
/// </summary>
void Player::Update(char* keys, char* preKeys) {

	Move(keys);

	// 撃っていないときにスペースキーを押すと
	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && !isShot_) {

		// 弾の座標をプレイヤーの座標に設定
		bullet_->SetPos(pos_);

		// 弾が発射される
		isShot_ = true;
	}

	// 弾を撃っているとき
	if (isShot_) {

		bullet_->Update();

		// 指定の座標に弾が行くと
		if (bullet_->GetPos().y <= -32.0f) {

			// フラグがfalseになる
			isShot_ = false;
		}
	}
}

/// <summary>
/// 描画処理
/// </summary>
void Player::Draw() {

	// 撃っているときのみ描画する
	if (isShot_) {

		// 弾の描画
		bullet_->Draw();
	}

	// 円で描画
	Novice::DrawEllipse(
		static_cast<int>(pos_.x), static_cast<int>(pos_.y),
		static_cast<int>(radius_.x), static_cast<int>(radius_.y),
		0.0f, color_, kFillModeSolid
	);
}