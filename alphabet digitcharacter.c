#include <stdio.h>

int main()
{
  int num=9;
  if(num>='A'&&num<='Z'||num>='a'&&num<='z'){
      printf("Alphabet");
  }
  else if(num>=0&&num<=9){
      printf("digit");
  }
  else{
      printf("character");
  }

    return 0;
}