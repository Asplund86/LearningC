#include <stdio.h>
#include <wchar.h>
#include <wctype.h>

void fskip_line(FILE);
void skip_line(void);
_Bool setLineToBreak(wchar_t);
_Bool setLineToBreak_char(char *a);
_Bool fget_line(wchar_t, int , FILE);
_Bool fget_line_char(char *a, int n, FILE *f);
_Bool get_line(wchar_t, int);
_Bool get_line_char(char *a, int n);
FILE *read_file(const wchar_t );
FILE *writeto_file(const wchar_t);
FILE *appendto_file(const wchar_t *commit);
