#include "ScavTrap.hpp"

// ScavTrapのコンストラクタ：基本クラスClapTrapのコンストラクタを呼び出し、さらに属性を初期化
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;                                                  // ヒットポイントを100に設定
	EnergyPoints = 50;                                                // エナジーポイントを50に設定
	AttackDamage = 20;                                                // 攻撃力を20に設定
	std::cout << "ScavTrap " << Name << " constructed!" << std::endl; // コンストラクタが呼ばれたことを表示
}

// ScavTrapのデストラクタ：オブジェクトが破棄される際に呼び出されます
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " destructed!" << std::endl; // デストラクタが呼ばれたことを表示
}

// ScavTrapの攻撃メソッド：指定されたターゲットに対して攻撃を行います
void ScavTrap::attack(const std::string &target)
{
	if (EnergyPoints > 0 && HitPoints > 0) // 攻撃が可能かチェック
	{
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage
		          << " points of damage!" << std::endl; // 攻撃の詳細を表示
		EnergyPoints--;                                 // エナジーポイントを減少させる
	}
	else
	{
		std::cout << "ScavTrap " << Name << " cannot attack, insufficient energy or hit points!"
		          << std::endl; // 攻撃不能の場合のメッセージ
	}
}

// ScavTrap専用のメソッド：ゲートキーパーのモードに入ることを表示
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode!"
	          << std::endl; // ゲートキーパーのモードに入ったことを表示
}
