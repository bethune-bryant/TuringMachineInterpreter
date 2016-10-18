100

1
b
//Computes the Irrational Number .0010110111011110111110111111.....
//Sets up the beginning of the tape.
b | | Pe, R, Pe, R, P0, R, R, P0, L, L | o

//Marks all of the 1's with x
o | 1 | R, Px, L, L, L | o
o | 0 | | q

//Goes to the end and prints a '1'.
q | 0, 1 | R, R | q
q | none | P1, L | p

//Goes to the first x and then Handles erasing the 'x' that marks a '1'.
p | x | E, R | q
p | e | R | f
p | none | L, L | p

//Tacks a '0' to the end.
f | any | R, R | f
f | none | P0, L, L | o