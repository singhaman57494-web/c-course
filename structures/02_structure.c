//                                  using structure store student data

#include <stdio.h>

struct student
{
    int id;
    int marks;
    char fav_char;
};

int main()
{
    struct student harry, subham, ravi;
    harry.id = 1;
    subham.id = 2;
    ravi.id = 3;

    harry.marks = 466;
    subham.marks = 446;
    ravi.marks = 456;

    harry.fav_char = '#';
    subham.fav_char = '*';
    ravi.fav_char = '$';
    
    printf("haryy got %d id\n", harry.id);
    printf("haryy got %d marks\n", harry.marks);
    printf("haryy got %c favchar\n", harry.fav_char);

    printf("ravi got %d id\n", ravi.id);
    printf("ravi got %d marks\n", ravi.marks);
    printf("ravi got %c favchar\n", ravi.fav_char);

    printf("subham got %d id\n", subham.id);
    printf("subham got %d marks\n", subham.marks);
    printf("subham got %c favchar\n", subham.fav_char);
    return 0;
}