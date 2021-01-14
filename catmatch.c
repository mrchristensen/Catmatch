#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

//I COMPLETED THE TMUX EXERCISE!
int main(int argc, char* argv[]){

	int pid = getpid();
	fprintf(stderr, "%d\n\n", pid);


	FILE *file = fopen(argv[1], "r");

	char line[5000];
	while(fgets(line, sizeof(line), file)){
		char* pattern = getenv("CATMATCH_PATTERN");

		//If the CATMATCH_PATTERN is defined in env AND we find the pattern in the line
		if(pattern != NULL && strstr(line, pattern) != NULL){
			fprintf(stdout, "1 ");
		}
		else{
			fprintf(stdout, "0 ");
		}

		fprintf(stdout, "%s", line);
	}

}
