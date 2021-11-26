#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text : ");

    // count of lettres in the text

    int count_letter = 0 ;
    int n = strlen(text)  ;

    for (int i = 0 ; i < n ; i++)
    {
        if (isalpha(text[i]) > 0)
        {
            count_letter ++ ;
        }
    }

    // count of words in the text

    int count_word = 1;
    for (int i = 0 ; i < n ; i++)
    {
        if ((isblank(text[i]) > 0 && isalpha(text[i + 1]) > 0) ||
            (isblank(text[i]) > 0 && ispunct(text[i]) > 0 && isalpha(text[i + 1]) > 0))
        {
            count_word ++ ;
        }
    }

    int count_sentence = 0;
    for (int i = 0 ; i < n ; i++)
    {
        if (text[i] == '!' || text[i] == '.' || text[i] == '?' || text[i] == ':')
        {
            count_sentence ++ ;
        }
    }

    // the Coleman-Liau index

    float L = (100 * count_letter) / count_word ;
    float S = (100 * count_sentence) / count_word ;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index == 1)
    {
        printf("EOF");
    }
    else if (index < 1)
    {
        printf("Before Grade 1");
    }
    else
    {
        if (index >= 1)
        {
            if (index >= (int)index + 0.55)
            {
                if (index > 16)
                {
                    printf("Grade 16+");
                }
                else
                {
                    printf("Grade %i", (int)(index + 1));
                }
            }
            else
            {
                if (index > 16)
                {
                    printf("Grade 16+");
                }
                else
                {
                    printf("Grade %i", (int)index);
                }
            }
        }

    }
    printf("\n");
}