/*
 * basicmatrix.c
 *
 *  Created on: 2015��11��3��
 *      Author: Cy
 */


#include "../mathematics.h"

void CpxMsSetI(cpxm a,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=0.;
		}
		a[i][i]=1.;
	}
}
