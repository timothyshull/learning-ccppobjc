#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	double c5, c0, semitoneratio;
	double frequency;
	int midinote;
	
	semitoneratio = pow(2.0, 1.0/12.0);
	c5 = 220.0 * pow(semitoneratio, 3.0);
	c0 = c5 * pow(0.5, 5.0);
	
	if(argc != 2){
		printf("cpsmidi: converts MIDI note to frequency. \n");
		printf("usage: cpsmidi MIDInote \n");
		printf("range: 0 <= MIDInote <= 127 \n");
		return 1;
	}
	midinote = atoi(argv[1]);
	
	if(midinote > 127){
		printf("%s is beyond the MIDI range! \n", argv[1]);
		return 1;
	}
	frequency = c0 * pow(semitoneratio, midinote);
	printf("frequency of MIDI note %d = %f\n", midinote, frequency);
	return 0;
}