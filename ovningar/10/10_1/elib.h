#include <stdio.h>
#include <wchar.h>
#include <wctype.h>

void fskip_line(FILE *f);
void skip_line(void);
_Bool setLineToBreak(wchar_t *a);
_Bool setLineToBreak_char(char *a);
_Bool fget_line(wchar_t *a, int n, FILE);
_Bool fget_line_char(char *a, int n, FILE *f);
_Bool get_line(wchar_t *a, int n);
_Bool get_line_char(char *a, int n);
FILE *read_file(const wchar_t *commit);
FILE *writeto_file(const wchar_t *commmit);
FILE *appendto_file(const wchar_t *commit);
