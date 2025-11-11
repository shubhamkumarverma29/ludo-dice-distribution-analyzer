/*
 ============================================================================
 Name        : Ludo Dice Distribution Analyzer
 Author      : Shubham Kumar Verma
 Description : Simulates rolling two 6-sided dice many times and analyzes
               the frequency and probability of each possible sum (2–12).
 Concepts    : Loops, Arrays, Functions, rand(), srand(), Probability
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function to simulate rolling a single die (returns value between 1–6) */
int roll_one_die() {
    return rand() % 6 + 1;
}

/* Function to calculate theoretical probability for a given sum */
double theoretical_probability(int sum) {
    int ways = 0;
    switch (sum) {
        case 2: case 12: ways = 1; break;
        case 3: case 11: ways = 2; break;
        case 4: case 10: ways = 3; break;
        case 5: case 9:  ways = 4; break;
        case 6: case 8:  ways = 5; break;
        case 7:          ways = 6; break;
    }
    return (double)ways / 36.0 * 100.0;
}

int main() {
    /* Number of total rolls (can be adjusted) */
    long total_rolls = 1000000;

    /* Array to store counts for sums 2–12 */
    int counts[13] = {0};

    /* Seed random number generator with current time */
    srand(time(0));

    printf("\n🎲 LUDO DICE DISTRIBUTION ANALYZER 🎲\n");
    printf("=====================================\n");
    printf("Simulating %ld rolls of two dice...\n\n", total_rolls);

    /* Simulation loop */
    for (long i = 0; i < total_rolls; i++) {
        int sum = roll_one_die() + roll_one_die();
        counts[sum]++;
    }

    /* Display results */
    printf("Sum\tCount\tExperimental(%%)\tTheoretical(%%)\n");
    printf("------------------------------------------------\n");

    for (int sum = 2; sum <= 12; sum++) {
        double experimental = (double)counts[sum] / total_rolls * 100;
        double theoretical = theoretical_probability(sum);
        printf("%2d\t%7d\t%14.2f\t%14.2f\n", sum, counts[sum], experimental, theoretical);
    }

    printf("------------------------------------------------\n");
    printf("Analysis complete!\n");

    return 0;
}