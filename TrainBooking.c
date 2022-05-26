#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int press,selection,choise2,num,seatadd,i,j,n;
char trainname[20];
int trainnum[20];
int disp[15][6];
int trainprice[20];
//char trainroute[40];
void adminlogin();
void userlogin();
void details();
struct route{
    char trainroute[30];
}r;
int main()
{
    printf("\t\t=================================================\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|           ----------------------              |\n");
	printf("\t\t|            TRAIN BOOKING SYSTEM               |\n");
	printf("\t\t|                     IRCTC                     |\n");
	printf("\t\t|           ----------------------              |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t|                                               |\n");
	printf("\t\t=================================================\n\n\n");
     
printf("Enter the system press any character\n");
scanf("%c",&press);
lebel1:
printf("[1].Login as a User\n[2].Login as a Admin\n");
scanf("%d",&selection);
switch(selection)
{
    case 1:
          printf("\n\n\n            ==============                          \n\n\n");
          printf("\n\n\n            WELCOME TO USER                         \n\n\n");
          printf("\n\n\n            ==============                          \n\n\n");
          userlogin();
          //details();
          
          
          break;
          
    case 2:
          printf("\n\n\n        =====================                          \n\n\n");
          printf("\n\n\n        WELCOME TO ADMIN SPACE                         \n\n\n");
          printf("\n\n\n        ====================                           \n\n\n");
          adminlogin();
          lebel4:
          printf("Here you can change information like this\n");
          printf("[1].enter the Train\n[2].enter the station\n[3].enter the range of seat\n[4].Exit from the Admin\n");
          scanf("%d",&choise2);
          switch(choise2)
          {
              case 1:
                      printf("=======Here You can Add the train\n");
                      printf("How many Trains Do you want to ADD:\n");
                      scanf("%d",&num);
                      for(int i=0;i<num;i++)
                      {
                      printf("Enter the %d train Number\n",i+1);
                      scanf("%d",&trainnum);
                      printf("Enter the %d Train Name\n",i+1);
                      scanf(" %[^\n]s",trainname);
                      printf("Enter the price of single seat\n");
                      scanf("%d",&trainprice);
                      }
                      printf("your Train Added successfull:-->\n");
                      goto lebel4;
                      break;
            case 2:
                     printf("=========Here you can Enter the station\n");
                     printf("Enter The num of Station :\n");
                     scanf("%d",&n);
                     for(int i=0;i<n;i++)
                     {
                         scanf(" %[^\n]s", r.trainroute[i]);
                     }
                     for(int i=0;i<n;i++)
                     {
                         printf("Your Stations are : %s",r.trainroute[i]);
                     }
                     printf("your Train Added successfull\n");
                     goto lebel4;
                     break;
            case 3:
                   printf("==========Here you can Enter or Add the Seat in the train\n");
                   printf("Enter the Seat you Want to Add:\n");
                   scanf("%d",&seatadd);
                   printf("Your Seat Range Added successfull:\n");
                   goto lebel4;
                   break;
            case 4: 
                   printf("=======Bye Bye Admin visit again=========\n");
                   goto lebel1;
                   break;
                   
                   
                    
          }

    default:
             printf("ok\n");
             break;
}
    
}

void adminlogin()
{ 
    char id[20],arr2[20];

        while(1)
        {
        printf("Enter the IRCTC id of 10 characters: ");
        scanf("%s",id);
        if(strlen(id)>=10)
         break;

        else {
                printf("password must be 10 character long\n");
             }
        }
        lebel2:
        printf("-----------Login details added wait to load it ---------------\n\n\n");

        printf("enter your id only 10 character again:\n");
        scanf("%s",arr2);
      if(strcmp(id,arr2)==0)
      {
         printf("login successfull\n");
      }
      else
      {
         printf("login unsuccesfull\n");
         printf("try again !!!!!\n");
         goto lebel2; 
      }
}

void userlogin()
{
char password[10],arr1[10];
char username[10];
int i;
 
        printf("Enter User name: ");
	    scanf("%s",username);
        while(1)
	    { 
	       printf("Enter the password of 8 characters: ");
           scanf("%s",password);
           if(strlen(password)>=8)
           break;

           else {
                printf("password must be 8 character long\n");
                }
	}
        lebel3:
        printf("-----------Login details added wait to load it ---------------\n\n\n");
        printf("enter your password only 8 character:\n");
        scanf("%s",arr1);
      if(strcmp(password,arr1)==0)
      {
         printf("login successfull\n");
      }
      else
      {
         printf("login unsuccesfull\n");
         printf("try again !!!!!\n");
         goto lebel3;
      }
}
