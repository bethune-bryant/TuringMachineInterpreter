9999999
ee00000000000000001111111111
20
0
0 |	|  | f(c,b,1)

//This section implements an instance of the m-function example on page 236.
//This one finds the first '1' on the tape, and marks over it with an 'x'.
f(c,b,1) | e | L | f1(c,b,1)
f(c,b,1) |  | L | f(c,b,1)

f1(c,b,1)| 1 	| 	| c
f1(c,b,1)| any	| R | f1(c,b,1)
f1(c,b,1)| none | R | f2(c,b,1)

f2(c,b,1)| 1 	| 	| c
f2(c,b,1)| any	| R | f1(c,b,1)
f2(c,b,1)| none	| R | b

c | 1 | Px | halt

b | | | halt
