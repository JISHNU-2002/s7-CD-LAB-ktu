# s7-CD-LAB-ktu


## Experiments

1.  Lexical Analyzer ( Token Identification ) using C [( lexical_analyzer.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/01%20Lexical%20Analyzer%20(%20C%20)/1%20Identify%20Tokens%20(%20Lex%20-%20C%20)%20/lexical_analyzer.c)


2.  Lexical Analyzer using Lex tool      [( lexical_analyzer.l )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/02%20LEX/1%20Lexical%20Analyzer%20(%20Lex%20)/lexical_analyzer.l)

3.  Lex - Display the number of lines, words and characters in an input text [( counts.l )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/02%20LEX/2%20Counts/counts.l)

4.  Lex - Convert substring abc to ABC [( abc_to_ABC.l )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/02%20LEX/3%20Substring%20(%20abc%20)/abc_to_ABC.l)

5.  Lex - Vowels and Consonants [( v_and_c.l )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/02%20LEX/4%20Vowels%20%26%20Consonants/v_and_c.l)

6.  YACC - Valid Arithmetic Expression [( Valid Arithmetic Expression )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/1%20Valid%20or%20Invalid/01%20Valid%20Arithmetic%20Expression)

7.  YACC - Valid Identifier [( Valid Identifier )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/1%20Valid%20or%20Invalid/02%20Valid%20Identifier)

8.  YACC - Calculator [( Calculator )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/2%20Calculator)

9.  e-closure of e-NFA [( eclosure.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/04%20%CE%B5closure%20%20of%20%CE%B5NFA/eclosure.c)

10. e-NFA to NFA conversion [( eNFA_NFA.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/05%20%CE%B5NFA%20to%20NFA/eNFA_NFA.c)

11. NFA to DFA conversion [( NFA_DFA.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/06%20NFA%20to%20DFA/NFA_DFA.c)

12. DFA Minimization [( min_dfa.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/07%20DFA%20Minimization/min_dfa.c)

13. First & follow [( first_follow.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/08%20First%20%26%20Follow/first_follow.c)

14. Recursive Descent Parser [( recursive.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/09%20Recursive%20Descent%20Parser%20(%20Top%20Down%20)/recursive.c)

15. Intermediate Code Generation [( intermediate_code.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/10%20Intermediate%20Code%20Generation/intermediate_code.c)

16. Constant Propogation [( const_prop.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/11%20Constant%20Propogation%20(%20Code%20Optimization%20)/const_prop.c)

17. Target Code Generation ( Backend of a compiler - Assembly language 8086) [( target.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/12%20Target%20Code%20Generation%20(%20Backend%208086%20)/target.c)


## Running Tests

To run Lex files

```bash
  flex filename.l
  gcc lex.yy.c -o filename
  ./filename
```

To run YACC program ( YACC + Lex )

```bash
  flex filename.l
  yacc -d filename.y
  gcc lex.yy.c y.tab.c -o filename
  ./filename
```

## Additional Programs

- C program to Remove comments [( remove_comts.c )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/blob/main/01%20Lexical%20Analyzer%20(%20C%20)/2%20Remove%20Comments/remove_comts.c)

- YACC - Valid C Expression ( a = b + c ; ) [( Valid C Expression )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/1%20Valid%20or%20Invalid/03%20Valid%20Expression%20(%20C%20))

- YACC - A^n B [( A^n B )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/1%20Valid%20or%20Invalid/04%20A%5En%20B)

- YACC - Valid Loop and Conditional Statements 
    - if-else [( IF ELSE )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/1%20Valid%20or%20Invalid/05%20IF%20ELSE)

    - for [( FOR )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/1%20Valid%20or%20Invalid/06%20FOR)

    - while [( WHILE )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/1%20Valid%20or%20Invalid/07%20WHILE)

    - do-while [( DO WHILE )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/1%20Valid%20or%20Invalid/08%20DO%20WHILE)

    - switch [( SWITCH )](https://github.com/JISHNU-2002/s7-CD-LAB-ktu/tree/main/03%20YACC/1%20Valid%20or%20Invalid/09%20SWITCH)


# CSL411 COMPILER LAB

## SYLLABUS

1. Implementation of lexical analyzer using the tool LEX
2. Implementation of Syntax analyzer using the tool YACC
3. Application problems using NFA and DFA
4. Implement Top-Down Parser
5. Simulation of code optimization Techniques
6. Implement Intermediate code generation for simple expressions
7. Implement the back end of the compiler

## PRACTICE QUESTIONS

- Design and implement a lexical analyzer using C language to recognize all valid tokens in the input program. The lexical analyzer should ignore redundant spaces, tabs and newlines. It should also ignore comments

- Implement a Lexical Analyzer for a given program using Lex Tool

- Write a lex program to display the number of lines, words and characters in an input text

- Write a LEX Program to convert the substring abc to ABC from the given input string

- Write a lex program to find out total number of vowels and consonants from the given input string

- Generate a YACC specification to recognize a valid arithmetic expression that uses operators +, – , *,/ and parenthesis

- Generate a YACC specification to recognize a valid identifier which starts with a letter followed by any number of letters or digits

- Implementation of Calculator using LEX and YACC

- Write a program to find ε – closure of all states of any given NFA with ε transition

- Write a program to convert NFA with ε transition to NFA without ε transition

- Write a program to convert NFA to DFA

- Write a program to minimize any given DFA

- Write a program to find First and Follow of any given grammar

- Design and implement a recursive descent parser for a given grammar

- Write a program to perform constant propagation

- Implement Intermediate code generation for simple expressions

- Implement the back end of the compiler which takes the three address code and produces the 8086 assembly language instructions that can be assembled and run using an 8086 assembler. The target assembly instructions can be simple move,add, sub, jump etc.
