// file name: mario.c
// author: Ben Silbernagel
// created: winter 2015-2016
// class: Introduction to Computer Science, by Harvard University
// purpose: pset1: prints a hill for mario

#include <stdio.h>
#include <cs50.h>

int main(void)
{ 
  int n, y = 0, x = 0; 
    
  do 
  {
    printf("Height: ");
    n = GetInt();
  }    
  while ((n < 0)|(n > 23));
    
  for (y=0;y<n;y++) 
  {
    for (x=1;x<n-y;x++)
      printf(" ");
    
    for (x=0;x<y*1+2;x++)
      printf("#");
      printf("\n");
      
  }
  return 0;
}