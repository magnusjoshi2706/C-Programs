#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int press,selection,choise2,num,seatadd,i,j,n,day,month,year;
char src[20];
char dest[20];
int disp[15][6];
void adminlogin();
void userlogin();
void details();
int date();
void train();
struct route{
    char trainroute[30];
}r[30];
struct print{
int trainnum;
int trainprice;
char trainname[30];
}p[30];

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
                      scanf(" %d",&p[i].trainnum);
                      printf("Enter the %d Train Name\n",i+1);
                      scanf(" %[^\n]s",p[i].trainname);
                      printf("Enter the price of single seat\n");
                      scanf(" %d",&p[i].trainprice);
                      }
                      printf("your Train Added successfull:-->\n");
                      goto lebel4;
                      break;
            case 2:
                     printf("=========Here you can Enter the station\n");
                     printf("Enter The num of Station :\n");
                     scanf("%d\n",&n);
                     for(int i=0;i<n;i++)
                     {
                         scanf(" %[^\n]s", r[i].trainroute);
                     }
                     for(int i=0;i<n;i++)
                     {
                         printf("Your Stations are : %s\n",r[i].trainroute);
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
char password[20],arr1[20];
char username[20];
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
         details();
      }
      else
      {
         printf("login unsuccesfull\n");
         printf("try again !!!!!\n");
         goto lebel3;
      }
}

void details()
{
    int flag=0;
    lebel5:
    printf("Enter Your Source and Destination :-->\n");
    for(int i=0;i<n;i++)
    {
    printf("Available Stops are :%s\n",r[i].trainroute);
    }
    printf("Source:\n");
    scanf("%s",src);
    printf("Destination:\n");
    scanf("%s",dest);
    for(int i=0;i<n;i++)
    {
        if(strcmp(src,r[i].trainroute)==0)
        {
                printf("this is right source choise\n");
                flag=1;
                break;
                
        }
    }
    if(flag==0)
    {
        printf("Select Again:--> there is no Stations Available\n");
         goto lebel5;
    }
    flag=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(dest,r[i].trainroute)==0)
        {
                printf("this is right Destination choise\n");
                flag=1;
                break;
               
                
        }
    }
    if(flag==0)
    {
        printf("Select Again:--> there is no Stations Available\n");
        goto lebel5;
    }
date();
}

int date()
{
   lebel8:
   printf("Enter the Year :-->:\n");
   scanf("%d",&year);
   if(year>2021)
   { 
     lebel9:
     printf("Enetr the month:\n");
     scanf("%d",&month);
     if(month>0 && month<13)
       {
          lebel7:
          printf("Enter your Date of Jurney\n");
          scanf("%d",&day);
          if(day>0 && day <32)
          {
            printf("Date : %d\nMonth : %d\nYear : %d\n",day,month,year);
          }       
          else
            {
                printf("Wrong Input:::-->\n");
                goto lebel7;
            }       
       }
  else
      {
      printf("wrong Input\n");
      goto lebel9;
      }
   }
     else
       {
        printf("wrong input::-->\n");
         goto lebel8;
       }

train();
return 0;
}

void train()
{
  printf("\n\n\n========Welcome User======== Wait to load the Available Train ===========\n\n\n");
  sleep(2);
   printf("Available Trains Are::\n");
  for(int i=0;i<num;i++)
  {
   printf("Name of the %d train: %s\n Number of %d train: %d\n Ticket price of the %d train: %d\n",i+1,p[i].trainname,i+1,p[i].trainnum,i+1,p[i].trainprice);
  }

 
}





















