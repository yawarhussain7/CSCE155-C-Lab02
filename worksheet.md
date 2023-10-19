
# Computer Science I 
## Lab 2.0 Worksheet

Name(Yawar Hussain) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

Today is 2023/10/18
Your birthday was 1941/09/09
Hello, DennisRitchie.  You are 82 years, 5 weeks, and 4 days old today


2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

Today is 2023/10/18
Your birthday was 1950/12/30
Hello, BjarneStroustrup.  You are 72 years, 41 weeks, and 5 days old today


3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

Today is 2023/10/19
Your birthday was 2002/01/31
Hello, Rizwan_Hadir.  You are 21 years, 37 weeks, and 2 days old today.

Today is 2023/10/19
Your birthday was 2004/12/21
Hello, Shoaib.  You are 18 years, 43 weeks, and 0 days old today.

4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size:   2 bytes
  range:  -32768 to 32767
* `int` 
  size: 4 btyes
  range:   -2147483648 to  2147483647
* `long int`
  size: 4 bytes
  range:    -2147483648 to  2147483647
* `float`
  size: 4 btyes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25

    Please input the total amount of US Dollars: 250.25
    Fee (10%): 25.02
    You gets:
    88.96 GBP
    14375 YEN

  b) $1,000.52

    Please input the total amount of US Dollars: 1000.52
    Fee (10%): 100.05
    You gets:
    355.68 GBP
    57472 YEN

  c) $968,410.12

    Please input the total amount of US Dollars: 986410.12
    Fee (10%): 98641.01
    You gets:
    350668.81 GBP
    56661864 YEN

6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?




7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?

Please enter the base of a triangle: 3
Please enter the height of a triangle: 4
The area is 0.000000 square units

The answer is not correct 

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

Please enter the base of a triangle: 3
Please enter the height of a triangle: 5
The area is 0.000000 square units.

The answer is not correct because we know when we divided two integer the result is also an integer value. In over case 1/2 which is equal to 0.5 as both value is int so it skip .5 and use 0 for multiplication as the result the answer is show 0.000000

c) Fix the program by editing the `area.c` source
code so that the program produces correct results.

explicit typecost in area formula 