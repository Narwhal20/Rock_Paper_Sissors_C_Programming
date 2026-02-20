#include<stdio.h>
//basic rock paper sissors, user always loses
int main(){
    char userInput;
    
    printf("Welcome to Cadens Rock Paper Sissors Game all programmed via C\n\n");
    printf("You will be playing against the Machine! please enter your selection, just type the first letter\n");
    printf("Rock --> r\n");
    printf("Paper --> p\n");
    printf("Sissors --> s\n\n");
    scanf(" %c", &userInput);
    printf("\n\n");
    //whatever user enters, user will always lose
    if (userInput == 'r')
        printf("You lose! The computer chose Paper...");
    else if (userInput == 'p')
        printf("You lose! The computer chose Sissors...");
    else if (userInput == 's')
        printf("You lose! The computer chose Rock...");
    else    
        printf("You Played the game wrong!! Shame!!!");


    return 0;
}
