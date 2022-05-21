#include<stdio.h>
#include<string.h>
#include <stdlib.h>
//#include<conio.h>
void Arcedgames();
void buygames();
int m;
int z;
int n;
//FILE *fp;
int main()
{

//int n;
//label:
printf("------hello user welcome to gamezone-------\n");
printf("what do you want to play....\n");
try0:
printf("\n---------------------------------------\n press 1 --> GTA v\n press 2 --> Clash of Royal\n Press 3 --> Battle of royal\n Press 4 --> for Arced games\n -----------------------------------");
printf("\nenter your choise here\n");
scanf("%d",&n);
switch (n)
{
    case 1: 
            printf("now you can play GTA v");
        break;
    case 2: 
            printf("now you can play Clash of Royal");
        break;
    case 3: 
            printf("now you can play Battle of royal");
        break;
    case 4:
            printf("go for Arced games at first floor\n");
            Arcedgames();
            
        break;
    default:
            printf("wrong input please try again\n");
            goto try0;
        break;    
}

    return 0;
}

void Arcedgames()
{
    printf("----------------welcome to Arced games----------------------\n");
    printf("<<<<<--------------------------playing games for your fun anytime anywhere------------------>>>>>\n");
    try1:
    printf("\n Press 10 ---> Taken 3\n Press 11 ---> Mario wonderworld\n Press 12 ---> Contra super world\n Press 13 ---> buy any game in sale 50$ off\n");
    scanf("%d",&m);
    switch (m)
{
    case 10: 
            printf("Play Taken 3\n");
        break;
    case 11: 
            printf("Play for Mario wonderworld\n");
        break;
    case 12: 
            printf("Play for Contra super world\n");
        break;
    case 13:
            printf("Go for buy a game with 50$ disscount\n");
            buygames();
        break;  
        
    default:
            printf("wrong input please try again\n");
            goto try1;
        break;    
            
}
}

void buygames()
{
    printf("<<<<<-------------------------------------we hope that you like all games-------------------------------->>>>>\n");
    printf("wlecome to buy some games\n");
    printf("-------here we have so many new games for 50$ disscount-------\n");
    try2:
    printf("\n Press 6 ---> GTA for 100$\n Press 7--->  Mincraft for 200$\n Press 8 ---> goto out of the gamezone");
    scanf("%d",&z);
    switch (z)
{
    case 6: 
            printf("GTA for 100$ is add in your cart thank you for shopping\n");
        break;
    case 7: 
            printf("Mincraft for 200$ is add in your cart thank you for shopping\n");
        break;
    case 8:
            printf("--------Bye Bye------- visit again ----------->");
        break;
    default:
            printf("wrong input please try again\n");
            goto try2;
        break;    
            
}
}
    