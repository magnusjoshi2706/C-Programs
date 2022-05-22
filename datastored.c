#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int p;
int choise;
int arr[100];
int* x;
int* y;
int n;
int m;
int main()


{
lebel3:
lebel4:
lebel5:
lebel6:
printf("------->>>> WLCOME TO THE DATASTORING AND MEMORY ALLOCATION SYSTEM <<<<-----------\n");
//printf("-------Enter the number you want to add or stored in memory ----------\n");
//scanf("%d",&n);
printf("\nPress 1 if you want to stored the data with arry\n Press 2 if you want to stored the data with malloc\n Press 3 you want to stored data with calloc \n Press 4 if you want to out of this loop\n");
scanf("%d",&choise);
switch(choise)
{
case 1:
       printf("----welcome in Array------\n");
       printf("enter the elemnets you want to add:\n");
       scanf("%d",&p);
       printf("enterd elements in array\n");
       for(int i=0;i<p;i++)
       {
         scanf("%d",&arr[i]);
       }
       for(int i=0;i<p;i++)
       {
          printf("enterd elements are : %d\n",arr[i]);
       }
       goto lebel4;
       break;
case 2:
      printf("-----hello and welcome to DMA ------- malloc system-------\n");
      lebel1:
      printf("enter the number of the elemets you want to add:\n");
      scanf("%d",&n);
      printf("entered elemets num is  :%d\n",n);
      x= (int*)malloc(n * sizeof(int));
      if(x==NULL)
      {
         printf("memory is not allocate properly:\n");
         exit(0);
         goto lebel1;
      }
      else
      {
        printf("memory allocating successfully\n");
        printf("enter the elemets you want to add ::--->>>\n"); 
       for(int i=0;i<n;i++)
       {
         scanf("%d",&x[i]);
       }
       for(int i=0;i<n;i++)
       {
         printf("enterd elemets are : %d\n",x[i]);
       } 
      }
      free(x); 
      goto lebel5;   
      break;
case 3:
      printf("welcome to calloc function for multiple memory allocate\n");
      lebel2: 
      printf("enter the number of the elemets you want to add:\n");
      scanf("%d",&m);
      printf("entered elemets num is  :%d\n",m);
      y= (int*)calloc(n,sizeof(int));
      if(y==NULL)
      {
         printf("memory is not allocate properly:\n");
         exit(0);
         goto lebel2;
      }
      else
      {
        printf("memory allocating successfully\n");
        printf("enter the elemets you want to add ::--->>>\n");
       for(int z=0;z<m;z++)
       {
         scanf("%d",&y[z]);
       }
       for(int z=0;z<m;z++)
       {
         printf("enterd elemets are : %d\n",y[z]);
       } 
      }
      free(y);
      goto lebel6;   
      break;   
case 4:
      printf("bye bye .......>>>>>>>>.......\n");
      break;
default :
      printf("invalid input....>\n");
      goto lebel3;
      break;


}
return 0;
}
