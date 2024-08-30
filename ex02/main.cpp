#include "FragTrap.hpp"

int main()
{
    // FragTrapオブジェクトの生成
    FragTrap frag("FR4G-TP");

    // 攻撃メソッドを実行
    frag.attack("target1");
    frag.takeDamage(20); // ダメージを受けるメソッド（ClapTrapクラスから継承）
    frag.beRepaired(10); // 回復メソッド（ClapTrapクラスから継承）

    // ハイタッチを要求
    frag.highFivesGuys();
    
    // 再度攻撃
    frag.attack("target2");

    return 0;
}
