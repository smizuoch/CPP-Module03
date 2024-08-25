#include "ClapTrap.hpp"

int main()
{
	// ClapTrapオブジェクトを作成し、名前を"CL4P-TP"に設定
	ClapTrap clap("CL4P-TP");

	// ターゲット1に対して攻撃を行い、ダメージを受け、修復を行う
	clap.attack("target1");
	clap.takeDamage(3);
	clap.beRepaired(5);

	// 再度攻撃とダメージ、修復のシナリオを実行
	clap.attack("target2");
	clap.takeDamage(15);
	clap.beRepaired(10);

	return 0; // プログラム終了
}
