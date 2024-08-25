#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

// ScavTrapクラスの定義：ClapTrapクラスから継承
class ScavTrap : public ClapTrap
{
  public:
	// コンストラクタ：名前を引数として受け取ります
	ScavTrap(std::string name);

	// デストラクタ：オブジェクトが破棄されるときに呼ばれます
	~ScavTrap();

	// メソッド：攻撃とゲートキーパーモードのアクションを定義
	void attack(const std::string &target);
	void guardGate();
};

#endif
