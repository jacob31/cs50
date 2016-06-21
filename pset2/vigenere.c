// file name: vigenere.c
// author: Ben Silbernagel
// created: winter 2015-2016
// class: Introduction to Computer Science, by Harvard University
// purpose: pset2: vigenere cipher

// libraries used for project
#include <stdlib.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])
{
    // Error message for no keyword
    if (argc != 2)
    {
        printf("Usage: /home/cs50/pset2/vigenere <keyword>\n");
        return 1;
    }

    // Error message for non-alphabet characters
    char *const restrict keyword = argv[1];
    size_t const keywordLength = strlen(keyword);

    for (size_t a = 0; a < keywordLength; a++)
    {
        if (!(isalpha(keyword[a])))
        {
            printf("Keyword must only contain letters A-Z and a-z\n");
            return 1;
        }
    }

    // converts keyword to vigenere associated value 
    char letterValue [keywordLength];
    int keywordShift [keywordLength];
    
    for (size_t a = 0; a < keywordLength; a++)
    {
        letterValue[a] = (isupper(keyword[a])) ? 'A' : 'a';
    }
    
    for (size_t a = 0; a < keywordLength; a++)
    {
        keywordShift[a] = keyword[a] - letterValue[a];
    }

    // ask for text to be ciphered
    string text = GetString();
    size_t textLength = strlen(text);

    // variable declaration
    double modulus = 26.0;

    // start of vigenere cipher
    for(int h = 0, i = 0; h <= keywordLength && i < textLength; h++, i++)
    {
        // only ciphers if actually in the alphabet
        if (isalpha(text[i])) 
        {   
            // resets h to the beginning of the keywordShift array
            if (h == keywordLength)
            {
                h = 0; 
            }
            
            // cipher for the upper case letters
            if (isupper(text[i]))  
            {
                // if statement is used to determine if the char plus key would
                // cause a need for rapping the char around back to the
                // beginning of the alphabet
                
                // no wrapping needed
                if (text[i] + keywordShift[h] < 'A' + modulus)
                {                                                 
                    text[i] = text[i] + keywordShift[h];
                } 
                
                // need to wrap
                else                                              
                    text[i] = (text[i] - modulus + keywordShift[h]);
            }                                                     
            
            // cipher for the lower case letters  
            else 
            {
                // if statement is used to determine if the char plus key would
                // cause a need for rapping the char around back to the
                // beginning of the alphabet
                
                // no wrapping needed
                if (text[i] + keywordShift[h] < 'a' + modulus)
                {                                                               
                    text[i] = text[i] + keywordShift[h];
                }
                
                // need to wrap
                else                                                            
                    text[i] = (text[i] - modulus + keywordShift[h]);
            }
        }
        else
        
            // for non-alphabetical characters
            h = h - 1;
        
        // prints vigenere cipher
        printf("%c", text[i]);
    }
    printf("\n");                                                       
    return 0;                                                                   

}