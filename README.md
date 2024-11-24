# Satya-s-Magical-Arena
Designed a Magical Arena. Every Player is defined by a “health” attribute, “strength” attribute and an “attack” attribute - all positive integers. The player dies if his health attribute touches 0. 

Any two players can fight a match in the arena. Players attack in turns. The attacking player rolls the attacking dice and the defending player rolls the defending dice. The “attack”  value multiplied by the outcome of the  attacking dice roll is the damage created by the attacker. The defender's “strength” value, multiplied by the result of the defending dice is the damage defended by the defender. Whatever damage is created by the attacker which is more than the damage defended by the defender will reduce the “health” of the defender. The game ends when any player's health reaches 0
Rules of game:
!. Players with lower health attacks first at the start of a match. 

2. Assume two players. Player A has 50 health 5 strength, and 10 attacks Player B has 100 health 10 strength and 5 attacks. The attacking die and Defending die are both-sided die with values ranging from 1- to 6

3. Player A attacks and rolls die. Die roll: 5 . Player B defends and rolls die. Die roll 2

4. Attack damage is 5 * 10 = 50 ; Defending strength = 10 * 2 = 20 ; Player B health reduced by 30 to 70

5. Player B attacks and rolls die. Die roll: 4. Player A defends and rolls die. Die Roll 3

6. Attack damage is 4 * 5 = 20 ; Defending strength = 5 * 3 = 15 ; Player A health reduced by 5 to 45

And so on
