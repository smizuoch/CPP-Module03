#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

// ClapTrapクラスの定義
class ClapTrap
{
  protected:                   // protectedに変更して、派生クラスからアクセス可能にする
	std::string Name;          // 名前
	unsigned int HitPoints;    // ヒットポイント
	unsigned int EnergyPoints; // エナジーポイント
	unsigned int AttackDamage; // 攻撃力

  public:
	// コンストラクタ：名前を引数として受け取ります
	ClapTrap(std::string name);

	// デストラクタ：オブジェクトが破棄されるときに呼ばれます
	~ClapTrap();

	// メソッド：攻撃、ダメージを受ける、修復のアクションを定義
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
