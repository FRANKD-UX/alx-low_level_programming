#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void print_array(int *a, int n);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *);
char *leet(char *s);
char *rot13(char *);
int _putchar(char c);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
#endif /* MAIN_H */

