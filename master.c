#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  char a[15];
  int s1,s2,total;
  printf("What is your name?\n>");
  scanf("%s",a);
  printf("Hello, %s!\n",a);
  
  srand((unsigned)time(NULL));
  printf("Rolling the dice...\n");
  s1 = rand()%6+1;
  s2 = rand()%6+1;
  printf("Die 1: %d\n",s1);
  printf("Die 2: %d\n",s2);
  total=s1+s2;
  printf("Total value: %d\n",total);
  if(total<8) printf("%s lost.\n",a);
  else printf("%s won!\n",a);
  return 0;
}
  
