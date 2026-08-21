//                         return count vowels using function 


#include <stdio.h>

int count_vowels(char sen[])
{
    int count =0;
    for (int i = 0; sen[i] != '\0'; i++)
    {
        if(sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char sentence[20];
    printf("enter the sentence : ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("%d ", count_vowels(sentence));

    return 0;
}