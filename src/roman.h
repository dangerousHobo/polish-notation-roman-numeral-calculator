#ifndef roman_h_
#define roman_h_

#define MAX_ARABIC 3999
#define MAX_ROMAN_LENGTH 9

typedef char* roman_t;
typedef unsigned int arabic_t;

int arabic_to_roman(arabic_t a, roman_t* r);
int roman_to_arabic(const roman_t r);

#endif // roman_h_
