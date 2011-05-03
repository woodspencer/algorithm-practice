#include <stdio.h>
#include <math.h>

//compile with gcc -lm because of the power function

/*
Objective of this homework is to
figure out the number sequence and then
continue it as a practice for algorithms
as well as further cement the foundations of C
into my skull
*/

void sequence1 (void); //question: 2, 4, 6, 8, ?
void sequence2 (void); //question: 17, 13, 9, 5, ?
void sequence3 (void); //question: 3, 6, 12, 24, ?
void sequence4 (void); //question: 48, 24, 12, 6, ?
void sequence5 (void); //question: 3, 9, 27, 81, ?
void sequence6 (void); //question: 4, -8, 16, -32, ?
void sequence7 (void); //question: 1, 1, 2, 3, ?
void sequence8 (void); //question: 1, 4, 9, 16, ?
void sequence9 (void); //question: 2, 6, 12, 20, ?
void sequence10 (void); //question: 1, 2, 9, 64, ?


int main() {
    system("clear");
    sequence1();
    sequence2();
    sequence3();
    sequence4();
    sequence5();
    sequence6();
    sequence7();
    sequence8();
    sequence9();
    sequence10();
    return 0;
}

void sequence1 (void) {
    int itr = 0;
    int even = 0;
    printf("Sequence 1: %d", even);
    while (itr < 10) {
        itr = itr + 1;
        even = even +2;
        printf(", %d", even);
    }
    printf("\n");
}

void sequence2 (void) {
    int itr = 0;
    int sub4 = 17;
    printf("Sequence 2: %d", sub4);
    while (itr < 10) {
        itr = itr + 1;
        sub4 = sub4 -4;
        printf(", %d", sub4);
    }
    printf("\n");
}

void sequence3 (void) {
    int itr = 0;
    int doubles = 3;
    printf("Sequence 3: %d", doubles);
    while (itr < 10) {
        itr = itr + 1;
        doubles = doubles + doubles;
        printf(", %d", doubles);
    }
    printf("\n");
}

void sequence4 (void) {
    int itr = 0;
    int halve = 3072;
    printf("Sequence 4: %d", halve);
    while (itr < 10) {
        itr = itr + 1;
        halve = halve /2;
        printf(", %d", halve);
    }
    printf("\n");
}

void sequence5 (void) {
    int itr = 0;
    int x3 = 3;
    printf("Sequence 5: %d", x3);
    while (itr < 10) {
        itr = itr + 1;
        x3 = x3 *3;
        printf(", %d", x3);
    }
    printf("\n");
}

void sequence6 (void) {
    int itr = 0;
    int xneg2 = 4;
    printf("Sequence 6: %d", xneg2);
    while (itr < 10) {
        itr = itr + 1;
        xneg2 = xneg2 *-2;
        printf(", %d", xneg2);
    }
    printf("\n");
}

void sequence7 (void) {
    int itr = 0;
    int fib = 0;
    int fib2 =1;
    printf("Sequence 7: %d", fib);
    while (itr < 5) {
        itr = itr + 1;
        fib = fib + fib2;
        fib2 = fib + fib2;
        printf(", %d, %d", fib, fib2);
    }
    printf("\n");
}

void sequence8 (void) {
    int itr = 0;
    int odds = 1;
    int odds2 = 3;
    printf("Sequence 8: %d", odds);
    while (itr < 10) {
        itr = itr + 1;
        odds = odds + odds2;
        odds2 = odds2 + 2;
        printf(", %d", odds);
    }
    printf("\n");
}

void sequence9 (void) {
    int itr = 0;
    int evens = 0;
    int evens2 = 2;
    printf("Sequence 9: %d", evens);
    while (itr < 10) {
        itr = itr + 1;
        evens = evens + evens2;
        evens2 = evens2 + 2;
        printf(", %d", evens);
    }
    printf("\n");
}

void sequence10 (void) {
    int itr = 0;
    int seqpow = 1;
    int seqpow2 = 0;
    int seqpow3;
    printf("Sequence 10: 0");
    while (itr < 10) {
        itr = itr + 1;
        seqpow3 = pow( seqpow, seqpow2);
        seqpow2 = seqpow2 +1;
        seqpow = seqpow +1;
        printf(", %d", seqpow3);
    }
    printf("\n");
}




