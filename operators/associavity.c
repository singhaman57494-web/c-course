#include <stdio.h>
/*
Precedence   Operator Category       Operators                                        Associativity

1,            Postfix                      () [] -> . ++ --                                      Left-to-right
2,            Unary                        + - ! ~ ++ -- (type) * & sizeof                       Right-to-left
3,            Multiplicative               * / %,                                                Left-to-right
4,            Additive                     + -                                                   Left-to-right
5,            Shift                        << >>                                                 Left-to-right
6,            Relational                   < <= > >=                                             Left-to-right
7,            Equality                     == !=                                                 Left-to-right
8,            Bitwise AND                  &                                                     Left-to-right
9,            Bitwise XOR                  ^                                                     Left-to-right
10            Bitwise                      |                                                     Left-to-right
11,           Logical                      &&                                                    Left-to-right
12,           Logical OR                   ||                                                    Left-to-right
13,           Conditional                  ?:,                                                   Right-to-left
14,           Assignment                   = += -= *= /= %= <<= >>= &= ^= |=,                    Right-to-left
15,           Comma                        ,                                                     Left-to-right

*/