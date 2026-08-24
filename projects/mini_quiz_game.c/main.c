#include <stdio.h>

void Quiz()
{
    char choice;
    char *questions[20] = {
        "Question 1 :- which function is used to make formatted input in c?",
        "Question 2 :- which language are we currently using",
        "Question 3 :- which symbol is used to end a C statement?",
        "Question 4 :- which function is used to display output in C?",
        "Question 5 :- which datatype is used to store a single character? ",
        "Question 6 :- which operator is used to get the remainder of a division?",
        "Question 7 :- which loops is guaranteed to execute at least once",
        "Question 8 :- Which keyword is used to return a value from a function ?",
        "Question 9 :- Array indexing in C starts from ?",
        "Question 10 :-  Which is the correct way to declare an integer variable?",
        "Question 11 :- Which keyword is used to make a variable constant?",
        "Question 12 :- Which operator is used to compare two values for equality?",
        "Question 13 :- What does break do inside a loop?",
        "Question 14 :- Which keyword is used for decision making?",
        "Question 15 :- Which symbol is used to access the address of a variable?",
        "Question 16 :- Which symbol is used to dereference a pointer?",
        "Question 17 :- Which header file is commonly used for printf() and scanf()?",
        "Question 18 :- What does \\0 represent in a C string?",
        "Question 19 :- Which keyword is used to define a structure?",
        "Question 20 :- Which of these is not a valid C data type?",

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
        printf("\n%s\n", questions[i]);
        for (int j = 0; j < 4; j++)
        {
            printf("(%c) %s\n", 'A' + j, options[i][j]);
        }

        printf("enter the choice(A-D) ");
        scanf(" %c", &choice);

        if (choice == correct[i])
        {
            printf("write Answer\n");
            score++;
        }
        else
        {
            printf("wrong Answer\n ");
        }
    }
    printf("score = %d/20\n", score);
}

int main()
{
    Quiz();

    return 0;
}