// Exercise 7 from chapter 13
// This macro gives a nonzero value if a given character is alphabetic.

#define IS_LOWER_CASE(x) ( ( ( x ) >= 'a' ) && ( ( x ) <= 'z' ) )
#define IS_UPPER_CASE(x) ( ( ( x ) >= 'A' ) && ( ( x ) <= 'Z' ) )
#define IS_ALPHABETIC(x) ( IS_LOWER_CASE(x) || IS_UPPER_CASE(x) )
