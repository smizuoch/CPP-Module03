#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// ClapTrapとScavTrapオブジェクトを作成
	ClapTrap clap("CL4P-TP");
	ScavTrap scav("SC4V-TP");

	// ClapTrapでのアクション：攻撃、ダメージ、修復
	clap.attack("target1");
	clap.takeDamage(3);
	clap.beRepaired(5);

	// ScavTrapでのアクション：攻撃、ダメージ、修復、ゲートキーパーモード
	scav.attack("target2");
	scav.takeDamage(15);
	scav.beRepaired(10);
	scav.guardGate();

	return 0; // プログラム終了
}
