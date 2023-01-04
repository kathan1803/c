#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string Text);
int count_words(string Text);
int count_sentences(string Text);

int main(void)
{
    string a = get_string("Text: ");
    printf("%s\n", a);

    int x = count_letters(a);

    int y = count_words(a);

    int z = count_sentences(a);

    float L = x / y * 100;
    float S = z / y * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", (int) round (index));
    }
}

int count_letters(string Text)
{
    int x = 0;
    for (int i = 0; i < strlen(Text); i++)
    {
        if (isupper(Text[i]))
        {
            x++;
        }
        else if (islower(Text[i]))
        {
            x++;
        }
    }
    return x;
}

int count_words(string Text)
{
    int y  = 1;
    for (int j = 0; Text[j] != '\0'; j++)
    {
        if (Text[j] == ' ')
        {
            y++;
        }
    }
    return y;
}

int count_sentences(string Text)
{
    int z  = 0;
    for (int k = 0; Text[k] != '\0'; k++)
    {
        if (Text[k] == '.')
        {
            z++;
        }
        else if (Text[k] == '!')
        {
            z++;
        }
        else if (Text[k] == '?')
        {
            z++;
        }
    }
    return z;
}


