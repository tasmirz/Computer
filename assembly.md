# Assembly documentation
 
## Comments
Buffer after `;` is ignored
## Registers
|No|Name|Alias|Special|
|-|-|-|-|
|0|r0|zero|Read Only|
|1|r1|temp|temporary|
|2|r2|sp|Stack Pointer|
|3|r3|bp|Return Address|
|.|.|.|.|
|16|r16|random|Random Number|
|.|.|.|.|
|0|r28||General|
## Segments 
Code is divided in 3 segments. Constants, Variables and Code Segments. Each segment is divided by `;---`. The code must be divided in 3 segments for operation.
### Constants 
>allows only numbers
```asm
a = 10
b=20
```
###  Memory 
```asm
var1 1 2 3 4 5
var2 3 dup 4 5 dup 6 7
var3 "abc"
```
Usage : `mov r15,var1`
## Instruction Set

Follow [this image](assets/instructions.png)
Extra instructions (provided by compiler), examples
```asm
mov r5,10
mov r6,#1000
mov #1000,r7
mov r8,var1
lea r8,#1000
push r9
pop r10
inc r23
dec r24
```
> `#` is used for direct memory addressing, variables and constants are replaced by the compiler