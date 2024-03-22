add r4,zero,14; 1c0111
add r5,24; 300151
load r1,r3; 1868
nop
sub r4,r4,1; 22112
add r3,r3,1;218d1
out 00,r1;1002f
nop
bne r4,zero,-7; 1fe40665
nop
nop
nop
out 10,r5; 500af
nop
nop
nop
hlt ; 3f
