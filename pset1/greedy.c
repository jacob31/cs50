// file name: greedy.c
// author: Ben Silbernagel
// created: winter 2015-2016
// class: Introduction to Computer Science, by Harvard University
// purpose: pset1: change calculator

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float c;
    
    int p, n, d, q, t;
    
    do
    {
        printf("How much change is owed?\n");
        c = GetFloat();
    }
    while (c < 0.0);
    
    t = round(c * 100);
    
    q = t/25;
    d = (t-(q*25))/10;
    n = (t-((q*25)+(d*10)))/5;
    p = (t-((q*25)+(d*10)+(n*5)))/1;
    
    printf("%d\n", q+d+n+p);
      
}