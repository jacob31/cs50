// file name: water.c
// author: Ben Silbernagel
// created: winter 2015-2016
// class: Introduction to Computer Science, by Harvard University
// purpose: pset1: calculates water usage

#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf("How long does it take for you to shower?\n");
    printf("minutes: ");
    int n = GetInt();
    int w = (128*1.5)/16*n;
    printf("bottles: %d\n", w);
    
}