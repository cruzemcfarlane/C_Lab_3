#include <stdio.h>
#include <string.h>

main(int argc, char *argv[]){
	if(argc == 2){
		FILE *fpt;
		int count = 0;
		char word[20] = {""};
		fpt = fopen(argv[1], "r");	
		while(1){
			fscanf(fpt, "%s", word);

			if(feof(fpt)){
				break;			
			}

			if(strlen(word)>2 && strlen(word)<16){
				printf("%s %d-bytes\n", word, (int)strlen(word));
				count++;
			}
		}
		
		printf("Total words: %d\n", count);		
		fclose(fpt);
		
	}

	else{
		printf("Please specify a valid filename at the commandline!\n");	
	}
}
