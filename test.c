#include<stdio.h>
void main()
{
  int i=0;
  while(1)
  {
    i++;
    if(i>=65535) i=0;
  }
}
