
# Computer Science I 
## Lab 2.0 Worksheet

Name: Hifza Naizr and Login(s): hifzanazir00781



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,3
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

Ans: Today is 2023/10/18
Your birthday was 1980/09/09
Hello, Dennis.  You are 43 years, 5 weeks, and 4 days old today

// There is some problem in my system thats why i changed the input. it doesnot give the correct value below 1970


2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

Today is 2023/10/18
Your birthday was 1970/12/30
Hello, bjarne.  You are 52 years, 41 weeks, and 5 days old today.

// there is some problem in my system thats why i changed the in input.

3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

Ans : 
1. Today is 2023/10/18
Your birthday was 1941/09/09
Hello, Dennis.  You are 0 years, 0 weeks, and 0 days old today.

2. Today is 2023/10/22
Your birthday was 1950/09/13
Hello, HamzaNisar.  You are 0 years, 0 weeks, and 0 days old today


4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes.
  range: -32768 to 32768
* `int`
  size: 4 bytes
  range: -2147483648 to 2147483648
* `long int`
  size: 4 bytes
  range: -2147483648 to  2147483647
* `float`
  size: 4 bytes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25
Ans : you got 98.750000 pounds, and 15956 yens
  b) $1,000.52
Ans : you got 395.000000 pounds, and 63825 yens
  c) $968,410.12
Ans : you got 382521.968750 pounds, and 61808768 yens


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?

Ans: I would not be able to use it to convert the US national debt to int types conversion program 
because the range of integer is very small as compare to US national dept 

As we know that:
US national debt = 26009754625487
int range = -2147483648 to  2147483647


7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?

Ans: The area is 0.000000 square units.
The correct answer answer is 6.000000. 
// there is some mistake in the formula 

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

Ans: The area is 0.000000 square units.
The correct ans is 7.5
// there is some mistake in formula

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.

Ans: The answer of first part is  6.000000 square units.
The answer of 2nd part is  7.500000 square units.
// we make correct in source file by changing 1/2 to 0.5