#include "Collision.h"

void Collision::PlayerBullet2Enemy1(Player* player, Enemy1* enemy1) {

	x_ = player->GetBulletPos().x - enemy1->GetPos().x;
	y_ = player->GetBulletPos().y - enemy1->GetPos().y;

	distance_ = sqrtf(x_ * x_ + y_ * y_);

	if (distance_ <= player->GetBulletRadius() + enemy1->GetRadius()) {

		enemy1->SetIsAlive(false);
	}
}

void Collision::PlayerBullet2Enemy2(Player* player, Enemy2* enemy2) {

	x_ = player->GetBulletPos().x - enemy2->GetPos().x;
	y_ = player->GetBulletPos().y - enemy2->GetPos().y;

	distance_ = sqrtf(x_ * x_ + y_ * y_);

	if (distance_ <= player->GetBulletRadius() + enemy2->GetRadius()) {

		enemy2->SetIsAlive(false);
	}
}