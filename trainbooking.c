#include<stdio.h>
#include<string.h>
//#include<conio.h>

int num;
int passnum;
char ch;
int i;
int ATM;
int payment;
struct pass{
char name[20];
int age;
}p[100];

int main()
{

	printf("-----------$$$$$$$$$$$$$  WELCOME TO IRCTC TRAIN BOOKING SERVICES  $$$$$$$$$$$$$------------------\n");
	label1:
        label2:
        printf("----------- Enter your IRCTC id for login purpose ---------------\n");
        printf("Your id must be between in 1 to 9999\n");
	scanf("%d",&num);

	if(num >=10000) 
	{
	
		printf("Invalid input\n");
                goto label2;
               
	}
	else if (num <=0)
	{
		printf("Invalid input\n");
                goto label1;

        }
        else
            {
                 printf("---------Welcome to booking section---------\n");
                 lebel4:
                 printf("please enter your details::------>>>>>>>\n");
                 printf("enter the passenger nuber you want to add\n");
                 scanf("%d",&passnum);
                 for(int i=0;i<passnum;i++)
                {
                       printf("enter %d passanger name:\n",i+1);
                       scanf("%s",p[i].name);
                       printf("please enter age of the %d passanger:\n",i+1);
                       scanf("%d",&p[i].age);
                }
            }

           printf("please check your details:-->\n");
           for(int i=0;i<passnum;i++)
           {
               printf("Name is :%s\n",p[i].name);
               printf("Age is :%d\n",p[i].age);
           }
           lebel6:
           printf("if the enformation is right then press r other then press a:>>>>\n");
           scanf("%s",&ch);          
           if(ch == 'a')
           {
               printf("go to add section....---->>>>:\n");
               goto lebel4;
           }
           else if(ch == 'r')
           {
               printf("go to payments section\n");
               goto lebel5;
           }
           else
              {
              printf("invalid input\n");
              goto lebel6;
              }
              lebel5:
          printf("enter your ATM card num:\n");
          scanf("%d",&ATM);  
         payment=passnum*200; 
         printf("your grand total is : %d\n\n\n",payment);

        printf("<<<<<<<<<<<<<<<<<<<<-------------Your ticket is here ------------->>>>>>>>>>>>>>>>>>\n ");
        for(int i=0;i<passnum;i++)
           {
               printf("Name is:%s\n",p[i].name);
               printf("Age is :%d\n",p[i].age);
           }
        printf("^^^^^^^^^^^^^^^^------------->Your seat<----------^^^^^^^^^^^^^^^^^ \n");
        for(int i=0;i<passnum;i++)
        {
            printf("seat number is %d\n\n",i+10);
        }
         printf("-----------$$$$$$$$$$ thank you for using our website $$$$$$$$$$$--------------\n");
        
        






      return 0;
}
