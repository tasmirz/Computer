# A Computer

This computer is a
* Harvard Architecture
* RISC Instruction set followed
* 5 Stage pipe-lined
* 29 bit computer
## Instruction Set

|opcode|	instruction|			st/ld	exsc		im				out	io	st/ld	jmp					loc		wr
|0|	nop|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|1|	add|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|2|	sub|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|3|	mul|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|4|	mulh|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|5|	div|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|6|	rem|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|7|	not|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|8|	and|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|9|	or|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|10|	xor|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|11|	shl|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|12|	shr|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|13|	ror|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|14|	rol|	0	0	0	0	1	0		0	0	0	0	0	0		0	0	0	0	0	1
|15|	ashl|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|16|																					|
|17|	add|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|18|	sub|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|19|	mul|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|20|	mulh|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|21|	div|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|22|	rem|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|23|	lui|	0	0	0	1	0	0		0	0	0	0	0	0		0	0	0	0	0	1
|24|	and|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|25|	or|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|26|	xor|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|27|	shl|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|28|	shr|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|29|	ror|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|30|	rol|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|31|	ashl|	0	0	0	0	1	1		0	0	0	0	0	0		0	0	0	0	0	1
|32|																					|
|33|	bg|	0	0	0	0	0	0		0	0	0	0	0	1		0	0	0	0	0	0
|34|	be|	0	0	0	0	0	0		0	0	0	0	0	1		0	0	0	0	0	0
|35|	bge|	0	0	0	0	0	0		0	0	0	0	0	1		0	0	0	0	0	0
|36|	bl|	0	0	0	0	0	0		0	0	0	0	0	1		0	0	0	0	0	0
|37|	ne|	0	0	0	0	0	0		0	0	0	0	0	1		0	0	0	0	0	0
|38|	ble|	0	0	0	0	0	0		0	0	0	0	0	1		0	0	0	0	0	0
|39|	jal|								0	0	0	0	0	1		0	0	0	1	1	1
|40|	load|																				
|41|	load(adddr)|																				
|42|	store|																				
|43|	storei|																				
|44|	in|																				
|45|	out|																				
|46|																					|
|47|																					|
|48|	.|																				
|49|																					|
|50|																					|
|51|																					|
|52|																					|
|53|																					|
|54|																					|
|55|																					|
|56|																					|
|57|																					|
|58|																					|
|59|																					|
|60|																					|
|61|																					|
|62|																					|
|63|																					|