#include <stdio.h>

main(){
	char device[20] = {""};
	char words[120] = {""};
	FILE *fpt;

	printf("Input entry, and press enter to continue or quit to exit\n\n");

	while(1){
		printf("Enter the device file\n");
		scanf("%s", device);

		printf("Enter output to display\n");
		scanf("%s", words);
		
		fpt = fopen(device, "w");
		fprintf(fpt, "%s", words);	
		fclose(fpt);	

		if((strcmp(words, "quit") == 0) || (strcmp(device, "quit") == 0)){			
			break;
		}
	}
}
