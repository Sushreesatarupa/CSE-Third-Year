1.      State the addressing modes given in following instructions.
           
                      (i)        ANA  M       
                      (ii)       RIM    
                      (iii)      CMA  
                      (iv)       SHLD 2000H   
                      (v)        LDAX B     
                      (vi)       XCHG     
                      (vii)      CMP M                
                      (viii)     DAA
           
**(2 Points)**

**Answer:**
```
ANA M: REGISTER INDIRECT ADDRESSING MODE
RIM: IMPLICIT ADDRESSING MODE
CMA: IMPLICIT ADDRESSING MODE
SHLD 2000H: DIRECT ADDRESSING MODE
LDAX B:  REGISTER INDIRECT ADDRESSING MODE
XCHG: REGISTER ADDRESSING MODE
CMP M: REGISTER INDIRECT ADDRESSING MODE
DAA: IMPLICIT ADDRESSING MODE
```



---

2. Write a set of instructions to enable RST 6.5 and disable RST7.5, RST 5.5.

**(1 Point)**

**Answer:**
```
EI
MVI A,1D
SIM

![image](https://user-images.githubusercontent.com/64991656/138214256-db739522-622e-4e34-a57b-bf4e4f04f76f.png)

```


---


3. What are the sequences of operations takes place when an interrupt signal is recognized in 8085 microprocessor?

**(0.5 Points)**

**Answer:**
```
• Save the PC content and information about the current state (flags, registers, etc.) in the stack.
• Load PC with the beginning address of an ISR and start to execute it.
• Finish ISR when the return instruction is executed.
• Return to the point in the interrupted program where execution was interrupted.
```


---


4. Explain the need to de-multiplex the bus AD0–AD7 in 8085 microprocessor

**(0.5 Points)**

**Answer:**
```
The address bus has 8 signal lines A8-A15. They are unidirectional. The other 8 address bits are multiplexed with the 8 data bits. Therefore the bits AD0-AD7 are bi-directional. They serve as A0-A7 and D0-D7 at the same time. As AD7-AD0 lines serve a dual purpose they have to be demultiplexed to get all the information.

The address's high order bits remain on the bus for 3 clock periods. The low order bits remain for only 1 clock period and may be lost if they are not saved externally. An external latch is used to save the value of AD7-AD0 when it is carrying the address bits so that the entire address remains for the 3 clock cycles. 

```


---


5. Write a set of instructions to transfer the contents of 8101H and 8100H to registers H and L respectively. 
   Then store the HL content to memory location 9301H and 9300H respectively.
   
**(0.5 Points)**

**Answer:**
```
LHLD 8100H
SHLD 9300H
```


---


6.  Each time when the data is loaded into stack, the Stack pointer gets______________. 
    Conversely it is ___________when data is retrieved from stack.
    
**(0.5 Points)**

**Answer:**
```
1) decremented
2) incremented
```


---


7. Write the set of instructions to load 50H and 60H in B and C registers respectively. 
   Then, store the contents of B and C registers on the stack. 
   
**(1 Point)**

**Answer:**
```
MVI B, 50H
MVI C, 60H
PUSH B
```


---


8. Write the set of instructions to implement the Boolean equation D= (B+C) ∙ E, where B, C, D and E represents data in various registers of 8085.

**(1 Point)**

**Answer:**
```
MOV A, B 
ORA C 
ANA E 
MOV D, A 
HLT
```


---


9. How much time it will take to execute MVI C, 05H instruction? 
   Assume, 8085 Microprocessor with 2MHz clock frequency.

**(1 Point)**

**Answer:**
```
MVI C, 05H - 7 T-states
1 T-State = 0.5 micro secs
Total Time = 3.5 micro seconds
```


---


10. Write a delay subroutine program for 8085 microprocessor to introduce a time delay of 1 millisec using only one register. 
    Let the system frequency is 2 MHz.
    
**(1 Point)**

**Answer:**
```
Mov B, 8fH ; By calculation, we get the count to be 8fH
BACK: DCR B
           JNZ BACK
```


---


11. What is the function of the instruction RRC? 
    Suppose A=93H and CY=0. 
    After the execution of this instruction, what will be the content of accumulator and carry flag?
    
**(1 Point)**

**Answer:**
```
RRC stands for rotate accumulator right
In this instruction, each bit is shifted to the adjacent right position. 
Bit D7 becomes D0. 
Carry flag CY is modified according to the bit D0
so 93H=10010011  CY=0
AFTER EXECUTION:  A=11001001=C9H         CY=1
```


---


12. State the number of T states required and type of flags affected in the execution of the following instructions of 8085 microprocessor.

           (i)        ANA A    
           (ii)       ANA  M    
           (iii)      CMP  B     
           (iv)       STC      
           (v)        CMA    
           (vi)       MVI  M, data      
           (vii)      LDA 2000H
           (viii)     JMP 1000H

**(2 Points)**

**Answer:**
```
i) ANA A - 4 T states,   S,z,p
ii) ANA  M - 7 T states, S,z,p
iii) CMP  B  - 4 T states, Cy ,Z, P,s
iv) STC - 4 T states, Cy
v) CMA   - 4 T states,  nil flags
vi) MVI  M, data - 10 T states, nil flags
vii) LDA 2000h- 13 T states, nil flags
viii) JMP 1000H - 10 T states,   nil flags
```


---


13. What maximum delay can be introduced by the subroutine program using a register pair (DE)? 
    Let the system clock frequency is 3 MHz. 
    Write the delay routine. 
    
**(2 Points)**

**Answer:**
```
delay:lxi d, ffffh
loop:dcx d
mov a, e
ora d
jnz loop
ret
maximum delay possible: (31+24*(count-1)+4(for return)) T states =524,283uS~0.52s
```


---


14. Suppose, it is desired to clear the accumulator contents of 8085 microprocessor. 
    Explain the four possible instructions for this purpose.
    
**(1 Point)**

**Answer:**
```
MVI A,00
ANI 00
XRA A
SUB A
```


---


15. Write a set of instructions in 8085 processor to exchange the contents of BC and HL register pairs.

**(0.5 Points)**

**Answer:**
```
push b
mov b, h
mov c, l
pop h
```


---


16. What will be the value of accumulator and flags (CY, S, P and Z), after the execution of the following program.

            MVI D, 7F H
            MVI C, 3E H
            MOV A, C
            RLC
            RLC
            ANA D
            HLT
 
**(1 Point)**

**Answer:**
```
A->78H
(cy=0,s=0,p=1,z=0)
```


---


17. What will be the value of B-register after the following program is executed?

            MVI A, 07 H
            STC
            CMC
            RAL
            MOV B, A
            STC
            CMC
            RAL
            STC
            CMC
            RAL
            ADD B
            MOVB, A
            HLT
 
**(1 Point)**

**Answer:**
```
b=46h
```


---


18. What will be contents of memory location 2500 H and flags (CY, S, P and Z), after the execution of the following program?

            MVI C, C8 H
            MVI A, 11 H
            ADD C
            STA 2500 H
            HLT
 
**(1 Point)**

**Answer:**
```
2500h->D9h
CY->0,s=1,p=0,z=0
S->1
P->0
Z->0
```


---


19. What will be contents of accumulator and flags (CY, S, P and Z), after the execution of SUB D instruction?
    Suppose,  A = C3 H and D = 3D H.

**(1 Point)**

**Answer:**
```
A=86h 
CY=0 S=1 P=0 Z=0
```


---


20. Write the mnemonic of an instruction in 8085 microprocessor that will set bit 6 of the accumulator without changing any of the other bits in the register.

(0.5 Points)

**Answer:**
```
MVI B, 20H
ORA B
```

---

