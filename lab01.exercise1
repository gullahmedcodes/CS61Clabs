//Write a program to print the Occurrence of a Digit in a given Number in C
#include <stdio.h>
#include <string.h>
struct DNA_sequence {
    char sequence [21];
    int A_count;
    int C_count;
    int G_count;
    int T_count;
} DNA_sequence;
void count(DNA_sequence *dna_seq);
int main() {
    struct DNA_sequence dna_seq_1;
    strcpy(dna_seq_1.sequence, "ACTTTGAAC");
    //char *str = "AAAACCC"; 
    count(&dna_seq_1);
    printf("A count is %i",dna_seq_1.A_count); 
    return 0;
}
void count(DNA_sequence *dna_seq){
    int m=0;
    int B_count=0;
    int C_count=0;
    int G_count=0;
    int T_count=0;
    while (m<strlen(dna_seq))
    {
        if(dna_seq[m] == 'A')
        {.B_count+=1;}
        if(dna_seq[m] == 'C'){C_count+=1;}
        if(dna_seq[m] == 'G'){G_count+=1;}
        if(dna_seq[m] == 'T'){T_count+=1;}
        m++;
    }
    //strcpy(dna_seq.A_count, B_count);
    printf("%i\n",dna_seq.A_count);
    printf("%i\n",C_count);
    printf("%i\n",G_count);
    printf("%i\n",T_count);
}
