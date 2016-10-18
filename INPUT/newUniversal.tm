1000
ccC111R1c11R0c0cc0c0c1R1cc0c0c0cccO101
1
A

A | 0, 1, c, L, R | R | A
A | C             | R | B

B | 0, 1, c, L, R | R | B
B | O             | L | C0
B | !             | L | C1
B | d             | L | CB

CB | 0, 1, c, L, R | L    | CB
CB | C             | Pc, R | DB

C0 | 0, 1, c, L, R | L    | C0
C0 | C             | Pc, R | D0

C1| 0, 1, c, L, R | L    | C1
C1| C             | Pc, R | D1

DB | 0 | L     | V
DB | 1 | P!, L | E

D0 | 0, 1, L, R | R | D0
D0 | c          | R | DB

D1 | 0, 1, L, R | R | D1
D1 | c          | R | D0

E | 0, 1, L, R | L | E
E | c          | L | F

F | 0, 1, L, R | L | E
F | c          | L | G

G | 0, 1, L, R | L | E
G | c          | R | H

H | c | R | I

I | c | PC, R | J

J | 0, 1, c, L, R | R     | J
J | !             | P1, R | KL

KL | 1 | P!, L | ML
KL | L | R     | TL
KL | R | R     | TR