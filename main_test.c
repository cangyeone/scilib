/*
 * main.c
 *
 *  Created on: 2016Äê12ÔÂ29ÈÕ
 *      Author: LLL
 */


#include "scilib/sac.h"
#include <stdio.h>
int main(int argc,char **argv)
{
	char inFile[200],outFile[200];
//SacFile=SacFileRead(fileName);
	//printf("%s\n%s\n",argv[1],argv[2]);
	printf("Sac File Trans Program.\n");
	if(argc==1)
	{
		printf("Input sac file name:\n");
		scanf("%s",inFile);
		printf("Out sac file name:\n");
		scanf("%s",outFile);
		SacFileToTxt(inFile,outFile);
	}
	else
	{
		SacFileToTxt(argv[1],argv[2]);
	}
	return 1;
}
