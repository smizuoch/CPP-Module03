#include "ScavTrap.hpp"

// ScavTrapのコンストラクタ：基本クラスClapTrapのコンストラクタを呼び出し、さらに属性を初期化
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	HitPoints = 100;                                                  // ヒットポイントを100に設定
	EnergyPoints = 50;                                                // エナジーポイントを50に設定
	AttackDamage = 20;                                                // 攻撃力を20に設定
	std::cout << "ScavTrap " << Name << " constructed!" << std::endl; // コンストラクタが呼ばれたことを表示
}

// ScavTrapのコピーコンストラクタ：オブジェクトのコピーが作成される際に呼び出されます
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << Name << " copied!" << std::endl; // コピーされたことを表示
}

// ScavTrapの代入演算子のオーバーロード：オブジェクトの代入が行われる際に呼び出されます
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	Name = other.Name;          // 名前を代入
	HitPoints = other.HitPoints; // ヒットポイントを代入
	EnergyPoints = other.EnergyPoints; // エナジーポイントを代入
	AttackDamage = other.AttackDamage; // 攻撃力を代入
	std::cout << "ScavTrap " << Name << " assigned!" << std::endl; // 代入されたことを表示
	return *this; // 代入されたオブジェクトを返します
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
