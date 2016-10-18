999999
aaaaaaaaabbbbbbbbb
1
start
//This machine detects if the input tape contains a number of a's followed by the same number of b's.
start | |  | das

das	  | none | R  | checkb
das    | a | E | srb

checkb | none | R | halt

srb | none | R | rb?

rb? | a, b | R | rb?
rb? | none | L | dbs

dbs | b | E | slb

slb | none | L | lb?

lb? | a, b | L | lb?
lb? | none | R | das