#include <stdio.h>

size_t my_strlen(const char *s)
{
   const char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

//String copy function
char *my_strcpy(char *t, char *s) {
  char *p = t;

  while (*t++ = *s++) {
    // do nothing
  }

  return p;
}

int main(void)
{
   int i;
   char p1[32];
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   printf("%s\n", my_strcpy(p1, "Hello, World !!!"));

   return 0;
}
