#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int value)
{
if(top==MAX-1)
{
printf("stack Overflow!Cannot push %d\n",value);
}
else
{
stack[++top]=value;
printf("%d pushed to stack\n",value);
}
}
void display(){
if(top==-1){
printf("stack is empty\n");
}
else
{
printf("stack elements:");
for(int i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
printf("\n");
}
}
int main()
{
int choice,value;
while(1)
{
printf("\n---stack ,menu--\n");
printf("1.push\n2.pop\n3.display\n4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter value to push:");
scanf("%d",&value);
push(value);
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
return 0;
default:printf("invalid choice!try again\n");
}
}
}

