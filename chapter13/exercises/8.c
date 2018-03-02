// Exercise 8 from chapter 13
// These macros give a nonzero value if a character is a digit or special.

#define IS_LOWER_CASE(x) ( ( ( x ) >= 'a' ) && ( ( x ) <= 'z' ) )
#define IS_UPPER_CASE(x) ( ( ( x ) >= 'A' ) && ( ( x ) <= 'Z' ) )
#define IS_ALPHABETIC(x) ( IS_LOWER_CASE(x) || IS_UPPER_CASE(x) )
#define IS_DIGIT(x) ( ( ( x ) >= '0' ) && ( ( x ) <= '9' ) )
#define IS_SPECIAL(x) ( !( IS_ALPHABETIC(x) ) && !( IS_DIGIT(x) ) )
