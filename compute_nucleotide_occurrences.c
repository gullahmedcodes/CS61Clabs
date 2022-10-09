/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
#include <stdio.h>
#include <string.h>
struct DNA_sequence {
    char sequence [21];
    int A_count;
    int C_count;
    int G_count;
    int T_count;
} DNA_sequence;
void nucleotide_occurrences(struct DNA_sequence *dna_seq);
int main() {
    struct DNA_sequence dna_seq_1;
    strcpy(dna_seq_1.sequence, "ACTTTGAAC");
    nucleotide_occurrences(&dna_seq_1);
    return 0;
}
void nucleotide_occurrences(struct DNA_sequence *dna_seq){
    int m=0;
    dna_seq->A_count=0;
    dna_seq->C_count=0;
    dna_seq->G_count=0;
    dna_seq->T_count=0;
    while (m<strlen(dna_seq->sequence))
    {
        if(dna_seq->sequence[m] == 'A'){dna_seq->A_count+=1;}
        if(dna_seq->sequence[m] == 'C'){dna_seq->C_count+=1;}
        if(dna_seq->sequence[m] == 'G'){dna_seq->G_count+=1;}
        if(dna_seq->sequence[m] == 'T'){dna_seq->T_count+=1;}
        m++;
    }
    printf("%i\n",dna_seq->A_count);
    printf("%i\n",dna_seq->C_count);
    printf("%i\n",dna_seq->G_count);
    printf("%i\n",dna_seq->T_count);
}
