int myStrlen( char *s )
{
    char *start;
    start = s;
    while( *s != 0 )
    {
        ++s;
    }
    return s - start;
}

 /* reverse:  reverse string s in place */
 char* myReverse(char s[])
 {
     int i, j;
     char c;

     for (i = 0, j = myStrlen(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
    //  vPrintMsg(s);
    //  vPrintChar('\n');
     return s;
 }

char* myAtoi(int n)
 {
     int i, sign;
     char *s = "";

     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     return myReverse(s);
 }
