#include <stdio.h>
#include <stdlib.h> // use of rand()
#include <time.h>   // use of srand()

void Quiz()
{
    char choice;
    int index[20];

    for (int i = 0; i < 20; i++)
    {
        index[i] = i;
    }
    for (int i = 19; i > 0; i--)
    {
        int j = rand() % (i + 1);

        int temp = index[i];
        index[i] = index[j];
        index[j] = temp;
    }
    char *questions[20] = {
        "Question :- which function is used to make formatted input in c?",
        "Question :- which language are we currently using",
        "Question :- which symbol is used to end a C statement?",
        "Question :- which function is used to display output in C?",
        "Question :- which datatype is used to store a single character? ",
        "Question :- which operator is used to get the remainder of a division?",
        "Question :- which loops is guaranteed to execute at least once",
        "Question :- Which keyword is used to return a value from a function ?",
        "Question :- Array indexing in C starts from ?",
        "Question :-  Which is the correct way to declare an integer variable?",
        "Question :- Which keyword is used to make a variable constant?",
        "Question :- Which operator is used to compare two values for equality?",
        "Question :- What does break do inside a loop?",
        "Question :- Which keyword is used for decision making?",
        "Question :- Which symbol is used to access the address of a variable?",
        "Question :- Which symbol is used to dereference a pointer?",
        "Question :- Which header file is commonly used for printf() and scanf()?",
        "Question :- What does \\0 represent in a C string?",
        "Question :- Which keyword is used to define a structure?",
        "Question :- Which of these is not a valid C data type?",

    };

    char correct[20] = {'A', 'B', 'B', 'B', 'B', 'C', 'C', 'B', 'A', 'C', 'C', 'B', 'C', 'A', 'B', 'B', 'C', 'C', 'A', 'D'};
    char *options[20][4] = {
        {"(A) scanf()", "(B) printf()", "(C) input()", "(D) read()"},
        {"(A) python", "(B) c", "(C) java", "(D)javascript"},
        {"(A) :", "(B) ;", "(C) .", "(D) ,"},
        {"(A) print()", "(B) printf()", "(C) display()", "(D) count()"},
        {"(A) string", "(B) char", "(C) character", "(D) taxt"},
        {"(A) /", "(B) //", "(C) %%", "(D) rem"},
        {"(A) for", "(B) while", "(C) do_while", "(D) None"},
        {"(A) break", "(B) return", "(C) exit", "(D) send"},
        {"(A) 0", "(B) 1", "(C) -1", "(D) 2"},
        {"(A) integer x", "(B) x int", "(C) int x", "(D) num x"},
        {"(A) fixed", "(B) constant", "(C) const", "(D) immutable"},
        {"(A) =", "(B) ==", "(C) ===", "(D) !="},
        {"(A) restarts the loop ", "(B) skips one iteration", "(C) exits the loop", "(D) stop the program permanently"},
        {"(A) if", "(B) chek", "(C) condition", "(D) when"},
        {"(A) *", "(B) &", "(C) #", "(D) @"},
        {"(A) &", "(B) *", "(C) %%", "(D) ->"},
        {"(A) <string.h", "(B) <math.h>", "(C) <stdio.h", "(D) <stdlib.h>"},
        {"(A) space", "(B) new line", "(C) null character", "(D) zero as a number"},
        {"(A) struct", "(B) structure", "(C) record", "(D) object"},
        {"(A) int", "(B) float", "(C) char", "(D) string"},

    };
    int score = 0;
    for (int i = 0; i < 20; i++)
    {
        printf("\n%s\n", questions[index[i]]);
        for (int j = 0; j < 4; j++)
        {
            printf(" %s\n", options[index[i]][j]);
        }
        printf("enter the choice(A-D) ");
        scanf(" %c", &choice);

        while (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D')
        {
            printf("Invalid choice! try again");
            scanf(" %c", &choice);
        }
        if (choice == correct[index[i]])
        {
            printf("write Answer\n");
            score++;
        }
        else
        {
            printf("wrong Answer\n ");
        }
    }
    printf("\n=========================QUIZ RESULT===============================\n");
    printf("correct Answers  : %d\n", score);
    printf("wrong Answer     : %d\n", 20 - score);
    printf("score            : %d/20\n", score);
    printf("percentage       : %.2f %%\n", (score * 100.0) / 20);
    printf("=====================================================================\n");

    float percentage = (score * 100.0) / 20;

    if (percentage >= 80)
    {
        printf("Excellent! \n");
    }
    else if (percentage >= 60)
    {
        printf("Good job! \n");
    }
    else if (percentage >= 20)
    {
        printf("keep practicing! \n");
    }
    else
    {
        printf("need more practice!  \n");
    }
}

int main()
{
    char again;
    int choice; 
    srand(time(NULL));
    
    printf("           C QUIZ GAME\n");
    printf("\n================================\n");
    printf("1. start Game\n");
    printf("2. Exit Game\n");

    printf("enter the coice(1 | 2) : ");
    scanf(" %d", &choice);
    printf("===================================\n");

    if(choice == 1)
    {
        do
    {
        Quiz();
        printf("Play again? enter (y , Y) : ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');
    }
    else if(choice == 2)
    {
        printf("game ended...\n");
    }
    else
    {
        printf("INVALID CHOICE! try again : \n");
    }

    printf("\n Game ended.. \n");

    return 0;
}