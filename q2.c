#include <stdio.h>
#include <string.h>

main(){
	struct inventory {
		char name[30];
		int count;
		float price;
	} log[75];
	
	strcpy(log[0].name, "tosora");;
	log[0].count = 1;
	log[0].price = 20.00;

	FILE *fpt;
	fpt = fopen("out2.txt", "w");
	fprintf(fpt, "%s %d $%.2f\n", log[0].name, log[0].count, log[0].price);
	fclose(fpt);
}
