// file name: initials.c
// author: Ben Silbernagel
// created: winter 2015-2016
// class: Introduction to Computer Science, by Harvard University
// purpose: pset2: returns initials from full name string

// library's used for this project
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>


int main(void)
{
    // variable declaration
    char firstName[30];
    char middleName[30];
    char lastName[30];
    string fullName;        
    int n;
  
    do
    {
        // prompt for typing users name
        fullName = GetString();
    }
    while (fullName == '\0');
  
    // used to find the number of words typed
    n = sscanf(fullName,"%s %s %s",firstName,middleName,lastName); 
  
    // finds the number of words typed,
    // then prints first letter of each word as a capital letter
    
    if (n == 1) 
    {
        printf("%c\n",toupper(firstName[0]));
    }
    else if (n == 2)
    {
        printf("%c%c\n",toupper(firstName[0]), toupper(middleName[0]));
    }
    else
    {
        printf("%c%c%c\n",toupper(firstName[0]), toupper(middleName[0]),
        toupper(lastName[0]));
    }
    return 0;
  
}