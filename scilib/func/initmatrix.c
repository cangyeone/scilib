/*
 * initmatrix.c
 *
 *  Created on: 2015Äê5ÔÂ9ÈÕ
 *      Author: Cy
 */
#include "../mathematics.h"
#include <stdlib.h>
cplx **CpxMInit(int m,int n)
{
	cplx **re;
	int i;
	cplx *tm;
	tm=(cplx *)calloc(sizeof(cplx),m*n);
	re=(cplx **)malloc(sizeof(cplx *)*m);
	for(i=0;i<m;i++)
	{
		re[i]=&tm[i*n];
	}
	return re;
}

void CpxMFree(cplx **a)
{
	free(a[0]);
	free(a);
}

cplx *CpxPInit(int n)
{
	cplx *re;
	re=(cplx *)calloc(sizeof(cplx),n);
	return re;
}

void CpxPFree(cplx *a)
{
	free(a);
}
