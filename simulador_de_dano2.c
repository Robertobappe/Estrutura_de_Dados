#include <stdio.h>
#include <stdlib.h>
enum types{Fire, Water, Wind, Earth, Light, Dark}; //0 a 5
int main(){
    int defenderHP, attackerAtk, defenderType, attackerType, damageMultiplier, hitChance, randHit;
    scanf("%d %d %d %d %d", &defenderHP, &defenderType, &attackerAtk, &attackerType, &hitChance);
    randHit = rand()%100;
    if(randHit < hitChance){
        if((attackerType == Water && defenderType == Fire) || (attackerType == Wind && defenderType == Earth)
           || (attackerType == Light && defenderType == Dark))
            damageMultiplier = 2;
        else if((attackerType == Fire && defenderType == Water) || (attackerType == Earth && defenderType ==
                                                                                             Wind) || (attackerType == Dark && defenderType == Light))
            damageMultiplier = 0.5;
        else
            damageMultiplier = 1.0;
        defenderHP -= attackerAtk*damageMultiplier;
    }
    else
        printf("O ataque falhou!\n");
    return 0;
}



