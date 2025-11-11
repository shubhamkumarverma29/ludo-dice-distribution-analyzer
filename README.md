# ludo-dice-distribution-analyzer
<br>
Project Description
<br>
This project simulates rolling two six-sided dice a large number of times (for example, 1,000,000 rolls) to analyze how frequently each possible sum (2 to 12) occurs. It calculates the experimental probability distribution from the simulated data and compares it with the theoretical probability distribution based on mathematics. The program demonstrates the use of loops, arrays, functions, conditional statements, and random number generation in C language — along with the concept of stochastic modeling and probability analysis.
<br>
How to Compile
<br>
Use the GCC compiler to compile the program. Run the following command in your terminal or
command prompt:
<br>
gcc ludo_dice_analyzer.c -o ludo -lm
<br>
How to Run
<br>
An example on terminal
<br>
$ gcc ludo_dice_analyzer.c -o ludo -lm
<br>
$ ./ludo
<br>

🎲 LUDO DICE DISTRIBUTION ANALYZER 🎲
<br>
=====================================
<br>
Simulating 1000000 rolls of two dice...
<br>

Sum   Count   Experimental(%)   Theoretical(%)
<br>
------------------------------------------------
<br>
 2     27645          2.76          2.78
 <br>
 3     55369          5.54          5.56
 <br>
 4    83369          8.33          8.33
 <br>
 5    110832         11.08         11.11
 <br>
 6    138891         13.89         13.89
 <br>
 7    166747         16.67         16.67
 <br>
 8    139064         13.91         13.89
 <br>
 9    110933         11.09         11.11
 <br>
10     83313          8.33          8.33
<br>
11     55282          5.53          5.56
<br>
12     27715          2.77          2.78
<br>
------------------------------------------------
<br>
Analysis complete!
<br>

After successful compilation, run the executable using:
<br>
./ludo
<br>
This will start the simulation and display a probability distribution table comparing experimental and
<br>
theoretical results.
<br>
Developer Information
<br>
Name: Shubham Kumar Verma
<br>
Branch: Computer Science and Engineering (CSE)
<br>
Section: G