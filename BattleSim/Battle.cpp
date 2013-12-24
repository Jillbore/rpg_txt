#include<C:\Users\Tyler\Desktop\Creature.hpp>

#include <iostream>
#include <conio.h>

int battlemain()
{
    int choice = 0;
    std::cout << "What will you do?\n 1:Hit\n 2:Block\n\n";    
    std::cin >> choice;
    return(choice);
}

void gameover()
{
     std::cout<<"GAME OVER!";
     getch();
     std::exit(0);
}
void win()
{
     std::cout<<"YOU WIN!";
     getch();
     std::exit(0);
}

int attack(Creature atk, Creature def)
{
         def.health -= (atk.attack/def.defense);
         return def.health;
}

    Creature player("You", 10, 10,10);
    Creature monster("The beast", 15, 10, 5);

    int choice = 0;
int main()
{
    std::system("cls");
    int i;
    std::cout<<player.name << " have " << player.health << " hitpoints.\n";
    std::cout<<monster.name << " has " << monster.health << " hitpoints.\n\n";
    if (monster.health<1){win();}
    if (player.health<1){gameover();}
    choice = battlemain();
    switch(choice)
    {
     case 1:
          monster.health=attack(player, monster);
          player.health=attack(monster, player);
          choice = 0;
     break;
     case 2:
          std::cout << "You block all incoming damage!";
          choice = 0;
          getch();
     break;
     default:
          std::cout << "Unrecognized command.";
          getch();
     break;
    }
    main();
}
