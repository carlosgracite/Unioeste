/*
 *
 */

unsigned distance(unsigned seq1, unsigned seq2, int k) {
	unsigned dist = 0;
	
	int i;
	for (i = 0; i < k; i++) {
		unsigned val1 = seq1 >> i;
		unsigned val2 = seq2 >> i;
		
		if ((val1 & 1) != (val2 & 1)) {
			dist++;
		}
	}

	return dist;
}

void printBits(unsigned seq, int k){
	int i;
	
	for (i = k-1; i > -1; i--) {
		unsigned val = (seq >> i) & 1;
		printf("%d", val);
	}
}

int main() {
	unsigned seq1 = 4;
	unsigned seq2 = 15;
	int k = 4;

	printf("seq1: ");
	printBits(seq1, k);
	printf("\nseq2: ");
	printBits(seq2, k);
	printf("\nDistância: %d", distance(seq1, seq2, k));

	return 0;
}
