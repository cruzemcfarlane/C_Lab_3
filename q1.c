#include <stdio.h>
main()
{
	FILE *fpt;
	int x;
	fpt=fopen("out.txt","w");
	for (x=0; x<15; x+=2)
		fprintf(fpt,"%2d ",x);
	fclose(fpt);

	/*
		The file will contain 24-bytes of data 	
	*/
}
