INFIX TO POSTFIX


#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char c){
if(top<MAX-1)
stack[++top]=c;
}
char pop(){
if(top>=0)
return stack[top--];
return 0;
}
char peek(){
if(top>=0)
return stack [top]\;
return 0;
}
int isoperator(char c){
return(c=='+'||c=='_'||c=='*'||c=='/'||c=='n');
}
int precedence(char c){
switch(c){
case '^':return 3;
case '*':
case '/':return 2;
case '+':
case'_':return 1;
default:return-1;
}
}
void infixtopostfix(char*infix){
char postfix[MAX];
int i=0;
for(int i=0;infix[i]!='\o';i++)
char ch=infix[i];
if(isalnum(ch)){
postfix[j++]=ch;
}
elseif(ch=='c'){
push(ch);
}
else if (ch==','){
while(peek()!=0&&peek()!='c')
postfix[j++]=pop();
pop();
}
else if (isoperator(ch)){
while(peek()!=0&&precedence(peek())>=precedence(ch));
postfiz[j++]=pop();
push(ch);
}
}
while(peek()!=0)
postfix[j++]=pop();
postfix[j]='\';
printf("postfix:%s\n",postfix);
}
int main(){
char infix,MAX,stdin);
printf("enter the infix expression:");
fgets(infix,MAX,stdin);
int len=strlen(infix);
if(len>0&&infix[len-1]=='\n'){
infixtopostfix(infix);
return 0;
}
