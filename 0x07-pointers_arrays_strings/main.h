#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, const char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, const char *to);

#endif /* MAIN_H */

