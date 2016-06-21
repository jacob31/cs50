// file name: helper.c
// author: Ben Silbernagel
// created: winter 2015-2016
// class: Introduction to Computer Science, by Harvard University
// purpose: Helper functions for Problem Set 3.
     
#include <cs50.h>


#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm with error message if not found
    int firstvalue = 0;
    int lastvalue = n - 1;
    int middlevalue = (firstvalue + lastvalue) / 2;

    while (firstvalue <= lastvalue)
    {
        if (values[middlevalue] < value)
        {
            firstvalue = middlevalue + 1;
        }
        else if (values[middlevalue] == value)
        {
            break;
        }
        else
        {
            lastvalue = middlevalue - 1;
        }
        middlevalue = (firstvalue + lastvalue) / 2;

    }
    if (firstvalue > lastvalue)
    {
        return false;
    }
    else
        return true;   
}

/*
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int loop, subloop, pos1, swap;
    
    for ( loop = 0 ; loop < ( n - 1 ) ; loop++)
    {
        pos1 = loop;
 
        for ( subloop = loop + 1 ; subloop < n ; subloop++)
        {
            if ( values[pos1] > values[subloop] )
            {
                pos1 = subloop;
            }
        }

        if (pos1 != loop)
        {
            swap = values[loop];
            values[loop] = values[pos1];
            values[pos1] = swap;
        }
    }   

}