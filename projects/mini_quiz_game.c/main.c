#include <stdio.h>
#include <stdlib.h> // use of rand()
#include <time.h>   // use of srand()

int Basic_level()
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
        printf("\nQuestion %d/20\n", i + 1);
        printf("\n%s\n", questions[index[i]]);
        for (int j = 0; j < 4; j++)
        {
            printf(" %s\n", options[index[i]][j]);
        }
        printf("enter the choice(A-D) ");
        scanf(" %c", &choice);

        while (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D')
        {
            printf("Invalid choice! try again : ");
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
    printf("\n=========================BASIC LEVEL RESULT===============================\n");
    printf("correct Answers  : %d\n", score);
    printf("wrong Answer     : %d\n", 20 - score);
    printf("score            : %d/20\n", score);
    printf("percentage       : %.2f %%\n", (score * 100.0) / 20);
    printf("============================================================================\n");

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
    return score;
}

int advance_level()
{
    int score = 0;
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
    char *question[20] = {
        "Question :- what is the output of printf(\"%%d\", sizeof(char));?",
        "Question :- which function is used to dynamically allocate memory in c ?",
        "Question :- which function releases dynamically allocated memory?",
        "Question :- what does a pointer store?",
        "Question :- what does *ptr repersent when ptr is a pointer? ",
        "Question :- what is the main purpose of static for a local variable?",
        "Question :- which operator accesses a structure a member through a structure pointer?",
        "Question :- which header file contains malloc() and free()?",
        "Question :- what does const generally indicate?",
        "Question :- what is recursion?",
        "Question :- which operator performs a bitwise AND?",
        "Question :- which operator performs a bitwise OR?",
        "Question :- what does relloc() do?",
        "Question :- which declaration repersents a pointer to an integer?",
        "Question :- what is a dangling pointer?",
        "Question :- which preprocessor directive is commanly used to define a micro ?",
        "Question :- what is a function pointer?",
        "Question :- Which function is commonly used to compare two strings in c ?",
        "Question :- if X = 10 and a pointer p points to x, what happens when *p = 20?",
        "Question :- if an integer array contains 10, 20, 30 and p points to its first element, what does *(p + 2) give?",

    };

    char Right[20] = {'B', 'B', 'C', 'B', 'B', 'B', 'B', 'C', 'A', 'B', 'A', 'B', 'B', 'C', 'B', 'B', 'A', 'B', 'A', 'C'};
    char *option[20][4] = {
        {"(A) 0", "(B) 1", "(C) 2", "(D) depends on compiler"},
        {"(A) alloc()", "(B) malloc()", "(C) memory()", "(D) new()"},
        {"(A) delete()", "(B) remove()", "(C) free()", "(D) relese"},
        {"(A) A data type", "(B) An address", "(C) A keyword", "(D) A function name only"}, //
        {"(A) address of ptr", "(B) value store at the pointed address", "(C) size of ptr", "(D) pointer type"},
        {"(A) makes it constant", "(B) preserves its value between function calls", "(C) make it global", "(D) delete it after use"},
        {"(A) .", "(B) ->", "(C) ::", "(D) *"},
        {"(A) stdio.h", "(B) string.h", "(C) stdlib.h", "(D) math.h"},
        {"(A) the value should not be modified through that declaration", "(B) the variable becomes global", "(C) the variable is autometically initialized to zero", "(D) the variable is store permanently"},
        {"(A) a loop inside a loop ", "(B) a function calling itself", "(C) pointer pointing itself", "(D) multiple functions with the same name"},
        {"(A) &&", "(B) &", "(C) int ||", "(D) |"},
        {"(A) |", "(B) |||", "(C) &&", "(D) ||"}, //
        {"(A) only frees memory", "(B) changes the size of previously allocated memory", "(C) creates a file", "(D) initializes a pointer"},
        {"(A) int p*; ", "(B) pointer int p;", "(C) int *p;", "(D) *int ptr;"},
        {"(A) A pointer initialized to Null", "(B) A pointer that refers to memory that is no longer valid", "(C) A pointer to a pointer", "(D) A pointer storing zero"},
        {"(A) #macro", "(B) #define", "(C) #include", "(D) #const"},
        {"(A) A pointer that stores the address of a function", "(B) A function that returns a pointer only", "(C) A pointer inside an array", "(D) A function with no parameters"},
        {"(A) strcompare()", "(B) strcpm()", "(C) compare", "(D) stringcmp()"},
        {"(A) x becomes 20", "(B) x remains 10", "(C) p becomes 20", "(D) an error occurs"},
        {"(A) 10", "(B) 20", "(C) 30", "(D) address of the array"},

    };

    for (int i = 0; i < 20; i++)
    {
        printf("\nQuestion %d/20\n", i + 1);
        printf("\n%s\n", question[index[i]]);
        for (int j = 0; j < 4; j++)
        {
            printf(" %s\n", option[index[i]][j]);
        }
        printf("enter the choice(A-D) ");
        scanf(" %c", &choice);

        while (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D')
        {
            printf("Invalid choice! try again : ");
            scanf(" %c", &choice);
        }
        if (choice == Right[index[i]])
        {
            printf("write Answer\n");
            score++;
        }
        else
        {
            printf("wrong Answer\n ");
        }
    }
    printf("\n=========================ADVANCE LEVEL RESULT===============================\n");
    printf("Correct Answers                : %d\n", score);
    printf("Wrong Answer                   : %d\n", 20 - score);
    printf("Advance level score            : %d/20\n", score);
    printf("Percentage                     : %.2f %%\n", (score * 100.0) / 20);
    printf("============================================================================\n");

    float Advance_percentage = (score * 100.0) / 20;

    if (Advance_percentage >= 85)
    {
        printf("Excellent! \n");
    }
    else if (Advance_percentage >= 70)
    {
        printf("nice work! \n");
    }
    else if (Advance_percentage >= 40)
    {
        printf("keep practicing! \n");
    }
    else
    {
        printf("need more practice!  \n");
    }

    return score;
}

int main()
{
    char again;
    int choice;
    int highscore = 0;
    char retry;
    char advance_choice;
    int basicscore = 0;
    int Advancescore = 0;

    srand(time(NULL));

    printf("           C QUIZ GAME\n");
    printf("\n================================\n");
    printf("1. start Game\n");
    printf("2. Exit Game\n");

    printf("enter the coice(1 | 2) : ");
    scanf(" %d", &choice);
    printf("===================================\n");

    if (choice == 1)
    {
        do
        {
            basicscore = Basic_level();
            if (basicscore > highscore)
            {
                highscore = basicscore;
            }
            printf("High score : %d/20\n", highscore);

            if (basicscore < 12)
            {
                printf("\nYou need at least 60%% to unlock advanced level.\n");
                printf("try Basic level again? (Y | N) : ");
                scanf(" %c", &retry);

                if (retry == 'Y' || retry == 'y')
                {
                    again = 'Y';
                    continue;
                }
                else
                {
                    break;
                }
            }

            if (basicscore >= 12)
            {
                printf("\n_____advance_level_unlocked!_____\n");
                printf("try advance level again? (Y | N) : ");
                scanf(" %c", &advance_choice);

                if (advance_choice == 'Y' || advance_choice == 'y')
                {
                    Advancescore = advance_level();

                    int totalScore = basicscore + Advancescore;
                    float percentage = (totalScore / 40.0) * 100;
                    printf("\n==================FINAL RESULT=======================\n");
                    printf("Basic level        : %d/20\n", basicscore);
                    printf("Advance level      : %d/20\n", Advancescore);
                    printf("total score        : %d/40\n", totalScore);
                    printf("percentage         : %.2f%%\n", percentage);
                    printf("\n=====================================================\n");
                    if (Advancescore > highscore)
                    {
                        highscore = Advancescore;
                    }
                }

                printf("Highscore : %d/20\n", highscore);
            }

            printf("Play again? enter (y , Y) : ");
            scanf(" %c", &again);

        } while (again == 'y' || again == 'Y');
    }
    else if (choice == 2)
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