60

1
begin
//This machine calculates the positive integers in sequence.

begin | none | P0 | increment

increment | 0    | P1    | rewind
increment | 1    | P0, L | increment
increment | none | P1 | rewind

rewind | none | L | increment
rewind | 	  | R | rewind