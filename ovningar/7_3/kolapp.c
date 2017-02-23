#include <stdio.h>
#include "kolapp.h"

static int sist = 0;
static int betjanad = 0;

int ta_lapp(void)
{
	return ++sist;
}

int betjana_kund(void)
{
	static int betjanad = 0;
	if(betjanad == sist)
		return -1;
	else
		return ++betjanad;
}

void init(void)
{
	sist = 0;
	betjanad = 0;
}

int betjanas(void)
{
	return betjanad;
}