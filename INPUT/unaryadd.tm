99999
@1111_1111111
1
findFirstSpace
//This machine adds two unary numbers together.

findFirstSpace | @, 1 | R | findFirstSpace
findFirstSpace | none | P1, R | findSecondSpace

findSecondSpace | 1 	| R 	  | findSecondSpace
findSecondSpace | none  | L, E, L | goToBeginning

goToBeginning | 1 | L | goToBeginning
goToBeginning | @ |   | halt