#include "BaseEnemy.h"

// 生きている状態で初期化
bool BaseEnemy::isAlive_ = true;

// 2秒で生き返る
float BaseEnemy::coolTime_ = 120.0f;