# 0x01. C - Variables, if, else, while

Project done during **Full Stack Software Engineering studies** at **ALX**. It aims to learn about arithmetic operators, relational operators, boolean operators, comments, declaring variables and loops in **C language**.

## Technologies
* Scripts written in Bash 5.0.17(1)
* C files are compiled using gcc 9.4.0
* C files are written according to the [Betty](https://github.com/alx-tools/Betty) style
* Tested on Ubuntu 20.04 LTS


## Tasks

### Mandatory tasks

0. [Positive anything is better than negative nothing](./0-positive_or_negative.c) : C program that prints a randomly generated number each time it is executed, followed by a new line.
	- Completion of [this source code](https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c).
    - Store a different value every time you will run this program.
    - Prints the number followed by `is positive` if the number is greater than 0, `is zero` if the number is zero, or `is negative` if the number is less than 0.

1. [The last digit](./1-last_digit.c) : C program that prints the last digit of a randomly generated number each time it is executed, followed by a new line:
    - Completion of [this source code](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c).
    - Prints the string `Last digit of` [number] `is` [last_digit] `and is` followed
    by `greater than 5` if the digit is greater than 5, `0` if the digit is 0, or
    `less than 6 and not 0` if the digit is less than 6 and not 0.

2. [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](./2-print_alphabet.c) : C program that prints the alphabet in lowercase, followed by a new line, using only the `putchar` function twice.


3. [When I was having that alphabet soup, I never thought that it would pay off](./3-print_alphabets.c) : C program that prints the alphabet in lowercase, and then in uppercase, followed by a new line, using only the `putchar` function three times.

4. [alphABET](./4-print_alphabt.c) : C program that prints the alphabet in lowercase except `q` and `e`, followed by a new line, using only the `putchar` function twice.

5. [Numbers](./5-print_numbers.c) : C program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

6. [Numberz](./6-print_numberz.c) : C program that prints all single digit numbers of base 10 starting from `0`, followed by a new line, using only the `putchar` function twice without any variables of type `char`.

7. [Smile in the mirror](./7-print_tebahpla.c) : C program that prints the lowercase alphabet in reverse, followed by a new line, using only the `putchar` function twice.

8. [Hexadecimal](./8-print_base16.c) : C program that prints all the numbers of base 16 in lowercase, followed by a new line, using only the `putchar` function three times.

9. [Patience, persistence and perspiration make an unbeatable combination for success](./9-print_comb.c) : C program that prints all possible combinations of single-digit numbers, using only the `putchar` function four times without any variables of type `char`:
    - Numbers are separated by `,`, followed by a space.
    - Numbers are printed in ascending order.


### Advanced tasks

10. [Inventing is a combination of brains and materials. The more brains you use, the less material you need](./100-print_comb3.c) : C program that prints all possible combinations of two digits using only the `putchar` function five times without any variables of type `char`:
    - Numbers are separated by `,`, followed by a space.
    - The two digits are different.
    - `01` and `10` are considered the same combination of the two digits `0` and `1`.
    - Prints only the smallest combination of two digits.
    - Numbers are printed in ascending order.

11. [The success combination in business is: Do what you do better... and: do more of what you do...](./101-print_comb4.c) : C program that prints all possible combinations of three digits using only the `putchar` function exactly six times without any variables of type `char`:
    - Numbers are separated by `,`, followed by a space.
    - The three digits are different.
    - `012`, `120`, `102`, `021`, `201` and `210` are considered the same combination of the three digits `0`, `1` and `2`.
    - Prints only the smallest combination of three digits.
    - Numbers are printed in ascending order.

12. [Software is eating the World](./102-print_comb5.c) : C program that prints all combinations of two two-digit numbers using only the `putchar` function exactly eight times without any variables of type `char`:
    - Numbers range from `0` to `99`.
    - Two numbers are separated by a space.
    - Numbers are printed with two digits [ie. `1` is printed as `01`].
    - `00 01` and `01 00` are considered the same as the combination of of the numbers `0` and `1`.
    - Combinations of numbers are separated by `,`, followed by a space.
    - Combinations of numbers are printed in ascending order.