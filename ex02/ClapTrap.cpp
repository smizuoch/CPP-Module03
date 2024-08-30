#include "ClapTrap.hpp"

// コンストラクタ：名前、ヒットポイント、エナジーポイント、攻撃力を初期化します
ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap " << Name << " constructed!" << std::endl; // コンストラクタが呼ばれたことを表示
}

// デストラクタ：オブジェクトが破棄される際に呼ばれます
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name << " destructed!" << std::endl; // デストラクタが呼ばれたことを表示
}

// 攻撃メソッド：指定されたターゲットに対して攻撃を行います
void ClapTrap::attack(const std::string &target)
{
	if (EnergyPoints > 0 && HitPoints > 0) // 攻撃が可能かチェック
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage
		          << " points of damage!" << std::endl; // 攻撃の詳細を表示
		EnergyPoints--;                                 // エナジーポイントを減少させる
	}
	else
	{
		std::cout << "ClapTrap " << Name << " cannot attack, insufficient energy or hit points!"
		          << std::endl; // 攻撃不能の場合のメッセージ
	}
}

// ダメージを受けるメソッド：指定されたダメージ量を受け、ヒットポイントを減らします
void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints <= amount) // 受けたダメージがヒットポイントを上回る場合
	{
		HitPoints = 0; // ヒットポイントを0に設定
	}
	else
	{
		HitPoints -= amount; // ダメージ分だけヒットポイントを減少させる
	}
	std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!"
	          << std::endl; // ダメージを受けたことを表示
}

// 修復メソッド：ヒットポイントを回復します
void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0 && HitPoints > 0) // 修復が可能かチェック
	{
		HitPoints += amount; // ヒットポイントを回復
		EnergyPoints--;      // エナジーポイントを減少させる
		std::cout << "ClapTrap " << Name << " is repaired by " << amount << " points!"
		          << std::endl; // 修復されたことを表示
	}
	else
	{
		std::cout << "ClapTrap " << Name << " cannot be repaired, insufficient energy or hit points!"
		          << std::endl; // 修復不能の場合のメッセージ
	}
}
