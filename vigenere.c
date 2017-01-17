#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, string argv [])

{
                //* end program if there is not 2 arguments
                if (argc != 2)
                { printf ("Needs an argument!\n");
                return 1;
                };

    //* key is the key for encyption
     string key = argv[1];

    int sk = strlen(key);

    //* go through each letter in the key and check it is an alpha letter
    for (int t = 0; t < sk; t++)
        {
            if (!isalpha(key[t]))
            {
                printf ("WHAT\n");
                return 1;
            }
        }
            //* letter is the code to encypt
            string letter = GetString();

            int sl = strlen(letter);

            //* go through each character in the letter until the end. use modulo of key length to loop around the key.
            for (int i= 0, n=0, j=0; j = n % sk, i< sl; i++)
            {
                //* if the character in the letter is upper case
                if ((isupper(letter[i])) && (isupper(key[j])))
                        //* use alphabet numbers to change the characters and then use ASCII to convert to letters.
                        {
                        int new_letter = ((letter[i] - 65)+ (key[j]- 65))%26;
                        printf ("%c", new_letter + 65 );
                        n++;
                        }


                else if ((isupper(letter[i])) && (islower(key[j])))
                    {
                        int new_letter = ((letter[i] - 65)+ (key[j]- 97))%26;
                        printf ("%c", new_letter + 65 );
                        n++;
                    }

                //* if the character in the letter is lower case
                else if ((islower(letter[i])) &&  (islower(key[j])))
                    {
                        int new_letter = ((letter[i] - 97)+ (key[j] - 97))%26;
                        printf ("%c", new_letter + 97 );
                        n++;
                    }

                else if ((islower(letter[i])) && (isupper(key[j])))
                    {
                     int new_letter = ((letter[i] - 97)+ (key[j] - 65))%26;
                        printf ("%c", new_letter + 97 );
                        n++;
                    }

                //* if the character is not a letter, print as is
                else
                    {
                    printf ("%c", letter[i]);
                    }
            }
                 //* Print a new line and end program
                 printf ("\n");
                 return 0;

}
