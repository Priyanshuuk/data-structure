#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check (char s)
{
    switch (s)
    {
    case '(': return 1;
     case ')': return -1;
      case '{': return 2;
       case '}': return -2;
        case '[': return 3;
         case ']': return -3;
       
    
    default:
        break;
    }
}
int pop(int * top , char st[]){
    *top = *top - 1;
  
  
}
void push (int *top , char value , char st[]){
    st[++(*top)] = value;

}

bool isempty (int *top) {
if(*top ==-1){
    return true;
}
else{
    return false;
}

}
int main ()
{

int testcases;


scanf("%d", &testcases);

for (int i = 0; i <testcases; i++)
{
    /* code */

int answer;

char s[100] ;
char st[100] ;
scanf ("%s", s);

int top = -1;
int count = strlen (s);

for (int i = 0; i < count; i++)
{
    if(s[i]=='('||s[i]=='{' || s[i]=='[')
    {
        push (&top, s[i] , st);
    }


    else if(s[i]=='}' || s[i]==')'||s[i]==']'){
        int temp = isempty(&top);
if(temp ==1){
    answer = 0;
    
}
while(isempty(&top)==0){
 if(check(s[i])+check(st[top]) ==0 ){
   pop(&top , st);
           int temp = isempty(&top);
if(temp ==1){
    answer = 1;
    
   
}
   
}
else{
    answer = 0;
    break;

    }
    }
}
}
if(answer == 1){
printf ("balanceded\n");
}
else{
printf ("unbalanced\n");

}
}
    return 0;
}
