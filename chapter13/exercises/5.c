// Exercise 5 from chapter 13
// This is a rewrite of shift from program 12.3. It's rewritten as a macro.

#define SHIFT(value,n) ( ( n ) > 0 ) ? ( value <<= n ) : ( value >>= -n )
