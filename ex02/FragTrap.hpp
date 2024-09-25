#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp" // 基底クラスであるClapTrapをインクルード
#include <iostream>
#include <string>

// FragTrapクラスの宣言：ClapTrapクラスを継承している
class FragTrap : public ClapTrap
{
  public:
	// コンストラクタとデストラクタの宣言
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap();

	// メソッドの宣言
	void attack(const std::string &target); // 攻撃メソッド
	void highFivesGuys();                   // ハイタッチメソッド
};

#endif
