// file name: credit.c
// author: Ben Silbernagel
// created: winter 2015-2016
// class: Introduction to Computer Science, by Harvard University
// purpose: pset1: asks for a long integer

#include <stdio.h>
#include <cs50.h>

int main (void)
{
    long cn;
    
    do
    {
        printf("Number: ");
        cn = GetLongLong();
    }
    while (cn < 1);
    
}