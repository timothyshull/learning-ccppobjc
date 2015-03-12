#include <stdio.h>
#include <string.h>

void std2file(FILE *);

int main(int argc, char *argv[]){
	if (argc != 2){
		printf("Usage is fileops \"filename.txt\"");
	}
	char filetag[5] = ".txt";
	char *filename[255];
	*filename = strncat(argv[1], filetag, 300); 
	printf("%s \n", *filename);
	FILE *fp = fopen(*filename, "w");
	std2file(fp);
	fclose(fp);
	return 0;
}

void std2file(FILE * ofp){
	int c;
	while ((c = getchar()) != EOF)
		putc(c, ofp);
}