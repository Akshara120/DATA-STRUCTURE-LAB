#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{ int data;
  struct node *next;
};
struct node *top=NULL;
void main()
{ 
int option;
do
{ printf("enter your choice;\n 1 push\n 2 pop\n 3 display\n 4 end\n");
  scanf("%d",&option);

switch(option)
{
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    display();
    break;
case 4:
    exist:
    break;
    default:printf("invalid choice..");
}
}while(option!=4);
}
void push()
{ 
  struct node *new=NULL;
new=(struct node*)malloc(sizeof(struct node*));
if(new==NULL)
printf("stack is overflow");
else{
printf("enter the data to be pushed:");
scanf("%d",&new->data);
new->next=top;
top=new;
  }
}
void pop()
{ 
struct node *ptr;
if(top==NULL)
  printf("stack underflow");
else 
{ printf("item to be poped %d",top->data);
 ptr=top;
 top=top->next;
 free(ptr);}
}
void display()
{
struct node *temp;
temp=top;
 if (temp==NULL)
  printf("stack is empty");
else {
while(temp!=NULL)
{ 

printf("elements are:%d\n",temp->data);
temp=temp->next;
}
}
}

