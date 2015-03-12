#include <stdio.h>
#include <string.h>

int mod12(int);

int main(){
	char note[3], **p1, **p2, *table[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B"};
	int interval, sub;
	printf("Enter base note (capitals, use # for sharps, eg. A#): ");
	scanf( "%s", note);
	printf("Enter interval in semitones: ");
	scanf ("%d", &sub);
	
	interval = sub - 1;

	p1 = table;
	p2 = table+11;
	printf("%d \n", !strcmp(*p1, note));
	while(!strcmp(*p1, note)){
		p1++;
		if(p1 > p2){
			printf("could not find %s \n", note);
			return 1;
		}

		p1 += mod12(interval);
		if(p1 > p2) p1 -= 12;

		printf("%s transposed by %d semitones is %s\n", note, sub, *p1);
		return 0;
	}
}

int mod12(int note){
	while(note < 0) note += 12;
	while(note >= 12) note -= 12;
	return note;
}