#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Player {
    char name[20];
    int health;
    int strength;
    int attack;
}Player;

int rollDice()
{
    return (rand() % 6)+1;
}

int calculate_Damage(int attackVal,int diceroll)
{
    return attackVal*diceroll;
}

int calculate_Defence(int DefenceVal,int diceroll)
{
    return DefenceVal*diceroll;
}

void attacking(Player *attacker,Player *defender)
{
    int attacker_roll=rollDice();
    int attack_damage=calculate_Damage(attacker->attack,attacker_roll);
    int defender_roll=rollDice();
    int defence_power=calculate_Defence(defender->strength,defender_roll);
    int exceed_damage;

    if (attack_damage > defence_power)
    exceed_damage=attack_damage-defence_power;
    else
    exceed_damage=0;

    defender->health=defender->health-exceed_damage;
    
    if (defender->health < 0)
    {
        defender->health=0;
    }
    printf(" %s attacks! Rolls:%d Damage:%d \n %s defence! Rolls:%d Defence:%d \n Exess Damage:%d \n",
    attacker->name,attacker_roll,attack_damage,defender->name,defender_roll,defence_power,exceed_damage);
    printf(" Now %s health is %d \n",defender->name,defender->health);
}

void start_Battle(Player *p1,Player *p2)
{
    printf("\n----------------------Welcome to Magical Arena----------------------------\n\n");
    printf("!! Battle begins between %s and %s !! \n\n",p1->name,p2->name);

    while (p1->health > 0 && p2->health>0)
    {
        Player *attacker = (p1->health <= p2->health)? p1 :p2;
        Player *defender= (attacker == p1) ? p2 :p1;

        attacking(attacker,defender);

        if (defender->health == 0)
        {
            printf("\n-----------------Game Ends------------------\n");
            printf("Result: %s dies by %s in the battle\n",defender->name,attacker->name);
            return;
        }
        printf("\n\n-------------Move to Next Turn Starts----------------\n");
    }
}

int main()
{
    srand(time(NULL));
    Player p1;
    Player p2;
    printf("Enter the name of Player 1: ");
    scanf(" %s",p1.name);
    printf("Enter the name of Player 2: ");
    scanf(" %s",p2.name);
    printf("Enter the health, strength & attack power of Player 1: ");
    scanf(" %d %d %d",&p1.health,&p1.strength,&p1.attack);
    printf("Enter the health, strength & attack power of Player 2: ");
    scanf(" %d %d %d",&p2.health,&p2.strength,&p2.attack);
    start_Battle(&p1,&p2);

    return 0;
}