#include "FragTrap.hpp"

// コンストラクタ：FragTrapオブジェクトを初期化し、名前とヒットポイント、エナジーポイント、攻撃ダメージを設定
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap " << Name << " constructed!" << std::endl; // オブジェクトが生成されたことを出力
}

// コピーコンストラクタ：オブジェクトがコピーされる際にメッセージを出力
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap " << Name << " copied!" << std::endl;
}

// 代入演算子のオーバーロード：オブジェクトが代入される際にメッセージを出力
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	Name = other.Name;
	HitPoints = other.HitPoints;
	EnergyPoints = other.EnergyPoints;
	AttackDamage = other.AttackDamage;
	std::cout << "FragTrap " << Name << " assigned!" << std::endl;
	return *this;
}

// デストラクタ：オブジェクトが破棄される際にメッセージを出力
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " destructed!" << std::endl;
}

// 攻撃メソッド：ターゲットに対して攻撃を行い、エナジーポイントを1減少させる
void FragTrap::attack(const std::string &target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << AttackDamage
		          << " points of damage!" << std::endl;
		EnergyPoints--; // 攻撃が成功するとエナジーポイントを減少
	}
	else
	{
		std::cout << "FragTrap " << Name << " cannot attack, insufficient energy or hit points!"
		          << std::endl; // エナジーやヒットポイントが足りない場合のメッセージ
	}
}

// High Fiveメソッド：ポジティブなハイタッチを要求するメッセージを出力
void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << Name << " requests a positive high five!" << std::endl;
}
