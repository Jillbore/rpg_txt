#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
using namespace std;

#define SCREEN_HEIGHT 25

bool initialized = false;

int clear(void)
{
    
  int i;
  
  for ( i = 0; i < SCREEN_HEIGHT; i++ )
    {putchar ( '\n' );}
    
  return 0;
  
}

int main()
{
    if(!initialized){clear();initialized = true;}
    int selection;
    string input;
    
    cout << "\nChoice Menu:     Enter Choice\n" << flush;
    cout << "Choice 1\n" << flush;
    cout << "Choice 2\n" << flush;
    cout << "Choice 3 - Clear Screen\n" << flush;
    cout << "Choice 4 - Exit Program\n" << flush;
    
    //cin >> input;             //SAVE FOR PARSER!!
    getline (cin, input);       //CaSe SensItIVe
    
    if(input == "Choice 1") {
             printf("You chose 1\n");
             printf("Press any key to continue\n");
             getch();
             }
    else if(input == "Choice 2") {
             printf("You chose 2\n");
             printf("Press any key to continue\n");
             getch();
             }
   else if(input == "Choice 3") {
             clear();
             }
   else if(input == "Choice 4") {
             printf("Exiting Program");
             return 0;
             }
   else if (input == "Help"){clear();cout << "Welcome to the help screen!\nAll commands are case sensitive!"; getch(); clear();}
   
   else{
             cout << "You have entered " << input;}
    
    return main();
}
