#include<stdio.h>
int a[10];
void main()
{
  int n,i,item,ch;
 printf("Enter the no. of elements:");
 scanf("%d",&n);
 int front=-1,rear=-1;
 do
 {
   printf("\n1.ADD 2.DELETE 3.DiSPLAY 4.EXIT");
   printf("Enter the choice:");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:printf("Enter the elements:");
      scanf("%d",&item);
      if((front==rear+1)||(front==0 && rear == n-1))
       printf("The queueis full");
       else
       {
        if(front==-1)
          front=0;
         rear=(rear+1)%n;
         a[rear]=item;
        printf("\n Inserted-> %d", item);
    }
     break;
    case 2:
         if(front == -1)
          printf("\n Circular Queue is Empty! Deletionis not possible!!!\n");
          else
           {
            item=a[front==-1];
            if(front==rear)
              {
                front=-1;
                rear=-1;
              }
            else
              {

               front=(front+1)%n;
              }
              printf("\n Deleted element --> %d \n", item);
            }
             break;
         
   

    case 3:
          if(front==-1)
           printf("\n Empty Queue\n");
          else
           {
              printf("Enter the element in queue are:\n");
              for(i=front;i!=rear;i=(i+1)%n)
               {
                 printf("%d",a[i]);
                }
                 printf("%d",a[i]);
              }
                break;
             default:
                 printf("\n Invalid choice");
                 break;
           }
    }while(ch!=4);
}




           


