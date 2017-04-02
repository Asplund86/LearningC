#include <stdio.h>
#include <wchar.h>
#include <wctype.h>

void trim(wchar_t *to, const wchar_t *from);
void towlower_string(wchar_t *to, const wchar_t *from);
void fskip_line(FILE *f);
void skip_line(void);
_Bool setLineToBreak(wchar_t *a);
_Bool setLineToBreak_char(char *a);
_Bool fget_line(wchar_t *a, int n, FILE *f);
_Bool fget_line_char(char *a, int n, FILE *f);
_Bool get_line(wchar_t *a, int n);
_Bool get_line_char(char *a, int n);
FILE *read_file(const wchar_t *commit);
FILE *writeto_file(const wchar_t *commmit);
FILE *appendto_file(const wchar_t *commit);
