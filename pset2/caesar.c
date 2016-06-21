// file name: caesar.c
// author: Ben Silbernagel
// created: winter 2015-2016
// class: Introduction to Computer Science, by Harvard University
// purpose: pset2: caesar cipher

// libraries used in project
#include <stdlib.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    // declaration of variables
    double key;
    double modulos = 26.0;
    int i;
    int inputKey;
    int textLength;
    string text;
    
    // checks for user input errors
    if (argc != 2)     
    {                                                                           
        printf("Usage: /home/cs50/pset2/caesar <key>\n");
        return 1;
    }

    // converts the input key into an integer
    inputKey = atoi(argv[1]);

    // gives an error message for keys that are negative
    if (inputKey < 0)
    {
        printf("Key must be a non-negative integer.\n");
        return 1;
    }
    // converts input key's greater than 25 into a number between 0-25
    else

    if (inputKey >= modulos)
    {
        key = inputKey - nearbyint(inputKey / modulos) * modulos;
    }
    else
    {
        key = inputKey;
    }

    // asks user for plain text that will be ciphered
    text = GetString();
    textLength = strlen(text);

// start of cipher formulas
    for(i = 0; i < textLength; i++)
    {
        // only ciphers if actually in the alphabet
        if (isalpha(text[i]))
        {
            // cipher for the upper case letters
            if (isupper(text[i]))
            {
                // if statement is used to determine if the char plus key would
                // cause a need for rapping the char around back to the
                // beginning of the alphabet
                
                // no wrapping needed
                if (text[i] + key < 'A' + modulos)
                {
                    text[i] = text[i] + key;
                }
                // need to wrap
                else
                    text[i] = text[i] - modulos + key;
            }
            // cipher for the lower case letters
            else
            {
                // if statement is used to determine if the char plus key would
                // cause a need for rapping the char around back to the
                // beginning of the alphabet
                
                // no wrapping needed
                if (text[i] + key < 'a' + modulos)
                {
                    text[i] = text[i] + key;
                }
                
                // need to wrap
                else
                {
                    text[i] = text[i] - modulos + key;
                }
            }
        }
        
        // prints caesar cipher
        printf("%c", text[i]);
    }
    printf("\n");
    return 0;

}