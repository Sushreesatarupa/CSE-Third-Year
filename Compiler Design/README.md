
Lab assignments includes:
1. A C Program to Design Lexical Analyzer
2. Understanding the LEX/FLEX tool. Implementation of Lexical Analyzer using LEX/FLEX Tool.
3. Develop a lexical analyzer to recognize a few patterns in C. (Ex. identifiers, constants, comments, operators etc.)
3. Implementation of Predictive Parser in C language.
4. Understanding the YACC tool.
5. Generate YACC specification for a few syntactic categories.
a. Program to recognize a valid arithmetic expression that uses operator +, – , * and /.
b. Program to recognize a valid variable which starts with a letter followed by any number of letters or digits.
c. Implementation of Calculator using LEX/FLEX and YACC
6. Convert the BNF rules into YACC form and write code to generate Abstract Syntax Tree.
7. Implement type checking.
8. Implement control flow analysis and Data flow Analysis.
9. Implement any one storage allocation strategies (Heap, Stack, Static)
10. Construction of DAG
11. Implement the back end of the compiler which takes the three address code and produces the 8086 assembly language instructions that can be assembled and run using a 8086 assembler. The target assembly instructions can be simple move, add, sub, jump. Also simple addressing modes are used.
12. A Program to Generate Machine Code.
13. Implementation of Simple Code Optimization Techniques.
14. Design of a mini compiler for simple programs.

# courcse objective
- To familiar with various tools and modules used in the design of a compiler.
- To study the concepts of Assembler, Macro Processor, Loader, Linker and various phases of compiler and syntax analysis.
- To learn the various parsing techniques, the semantic analysis, translation of statements.
- To learn about Generating and Optimizing codes.

# Course Outcomes
- To provide an understanding of the language translation peculiarities by designing complete translator for small user defined language. To provide an understanding of the design aspect of operating system.

##SLIDES

1. Lecture-1
    1. What is a Compiler ?
    2. interpreter - An alternative to compiler
    3. Compiler and Interpreter
    4. Language processing system
    5. Phases of Compilation
    6. Passes in Compiler
    7. Bootstrapping
    8. Bootstrapping and Cross Compiler
    9. Building a Compiler with Lex and Yacc
2. Lecture-2
    1. Function of lexical analyzer
    2. input Buffering
    3. A simple lexical analyzer for identifier
    4. Designing a lexical analyzer
    5. Transition diagrams for token recognizers
    6. Combining the token recognizers
    7. Lexical Specification and Regular Expressions
    8. Finite Automata
    9. Constructing NFA from Regular expression
    10. Constructing DFA from NFA
    11. Minimizing number of states in DFA
    12. Combined NFA for tokens
    13. Combined DFA for tokens
3. Lecture-3
    1. Functions computed from syntax tree for RE (r)#
    2. Firstpos and lastpos
    3. Construction of DFA
    4. Final DFA of (a|b)∗abb#
    5. Data Structures for DFA
    6. Compressed representation of DFA
    7. Lexical-Analyzer Generator Lex
    8. Building a Complier with Lex and Yacc
    9. Structure of Lex Programs
    10. A Lex program - token recognizer.l
    11. Flex Library -lfl
4. Lecture-4
    1. Lexical-Analyzer Generator Lex
    2. Building a Complier with Lex and Yacc
    3. Structure of Lex Programs
    4. A Lex program to reconize following tokens
    5. File I/O in Flex Scanners
    6. Word count program - one input file
    7. The I/O Structure of a Flex Scanner
5. Parsing
    1. Top-Down Parser
        a) With BackTracking
        b) Without Backtacking LL(1) parser
    2. Bottom-Up Parser
        a) LR(0)
        b) SLR(1)
        c) LALR(1)
        d) CLR(1)
