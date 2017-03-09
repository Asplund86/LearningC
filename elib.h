#include <stdio.h>

void fskip_line(FILE *f);
void skip_line(void);
_Bool setLineToBreak(wchar_t *a);
_Bool fget_line(wchar_t *a, int n, FILE *f);
_Bool get_line(wchar_t *a, int n);
