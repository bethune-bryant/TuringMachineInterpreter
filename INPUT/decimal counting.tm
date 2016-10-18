100

1
begin
//This machine calculates the positive integers in sequence using decimal numbers.

begin | none | P0 | increment

increment | 0    | P1    | rewind
increment | 1    | P2    | rewind
increment | 2    | P3    | rewind
increment | 3    | P4    | rewind
increment | 4    | P5    | rewind
increment | 5    | P6    | rewind
increment | 6    | P7    | rewind
increment | 7    | P8    | rewind
increment | 8    | P9    | rewind
increment | 9    | P0, L | increment
increment | none | P1    | rewind

rewind | none | L | increment
rewind | 	  | R | rewind