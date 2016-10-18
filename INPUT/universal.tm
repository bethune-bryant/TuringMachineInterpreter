1000
ee;_D_A_D_D_C_R_D_A_A_;_D_A_A_D_D_C_C_R_D_A_#
50
b
//Use # for '::'
//The table for U:
b  | |                              | f(b1,b1,#)
b1 | | R, R, P:, R, R, PD, R, R, PA | anf

anf  | | | g(anf1,:)
anf1 | | | con(kom,y)

kom | ; | R, Pz, L | con(kmp,x)
kom | z | L, L     | kom
kom |   | L        | kom

//kmp as corrected by Donal Davies
kmp | | | cpe(e(fom,x,y),sim,x,y)

//Expanded M-Functions

//------------------------------------Find------------------------------------
//-----------f(b1,b1,#)
f(b1,b1,#) | e | L | f1(b1,b1,#)
f(b1,b1,#) |   | L | f(b1,b1,#)

f1(b1,b1,#) | #    |   | b1
f1(b1,b1,#) | none | R | f2(b1,b1,#)
f1(b1,b1,#) |      | R | f1(b1,b1,#)

f2(b1,b1,#) | #    |   | b1
f2(b1,b1,#) | none | R | b1
f2(b1,b1,#) |      | R | f1(b1,b1,#)
//------End--f(b1,b1,#)
//----------------------------------End Find----------------------------------

//------------------------------------Find Rightmost--------------------------
//-----------g(anf1,:)
g(anf1,:) | | | g(g1(anf1,:))

g1(anf1,:) | : |   | anf1
g1(anf1,:) |   | L | g1(anf1,:)
//------End--g(anf1,:)

//-----------g(g1(anf1,:))
g(g1(anf1,:)) | any  | R | g(g1(anf1,:))
g(g1(anf1,:)) | none | R | g1(g1(anf1,:))

g1(g1(anf1,:)) | any  | R | g(g1(anf1,:))
g1(g1(anf1,:)) | none |   | g1(anf1,:)
//------End--g(g1(anf1,:))
//----------------------------------End Find Rightmost------------------------

//------------------------------------Configuration---------------------------
//-----------con(kom,y)
con(kom,y) | A | L, Py, R | con1(kom,y)
con(kom,y) |   | R, R     | con(kom,y)

con1(kom,y) | A    | R, Py, R           | con1(kom,y)
con1(kom,y) | D    | R, Py, R           | con2(kom,y)
con1(kom,y) | none | PD, R, Py, R, R, R | kom

con2(kom,y) | C | R, Py, R | con2(kom,y)
con2(kom,y) |   | R, R     | kom
//------End--con(kom,y)

//-----------con(kmp,x)
con(kmp,x) | A | L, Px, R | con1(kmp,x)
con(kmp,x) |   | R, R     | con(kmp,x)

con1(kmp,x) | A    | R, Px, R           | con1(kmp,x)
con1(kmp,x) | D    | R, Px, R           | con2(kmp,x)
con1(kmp,x) | none | PD, R, Px, R, R, R | kmp

con2(kmp,x) | C | R, Px, R | con2(kmp,x)
con2(kmp,x) |   | R, R     | kmp
//------End--con(kmp,x)
//----------------------------------End Configuration-------------------------

//------------------------------------Compare and Erase-----------------------
//-----------cpe(e(fom,x,y),sim,x,y)
cpe(e(fom,x,y),sim,x,y) | | | cpe(cpe(e(fom,x,y),sim,x,y),e(fom,x,y),sim,x,y)
//------End--cpe(e(fom,x,y),sim,x,y)

//-----------cpe(cpe(e(fom,x,y),sim,x,y),e(fom,x,y),sim,x,y)
cpe(cpe(e(fom,x,y),sim,x,y),e(fom,x,y),sim,x,y) | | | cp(e(e(cpe(e(fom,x,y),sim,x,y),cpe(e(fom,x,y),sim,x,y),y),cpe(e(fom,x,y),sim,x,y),x),e(fom,x,y),sim,x,y)
//------End--cpe(cpe(e(fom,x,y),sim,x,y),e(fom,x,y),sim,x,y)

//-----------cp(e(e(cpe(e(fom,x,y),sim,x,y),cpe(e(fom,x,y),sim,x,y),y),cpe(e(fom,x,y),sim,x,y),x),e(fom,x,y),sim,x,y)
cp(e(e(cpe(e(fom,x,y),sim,x,y),cpe(e(fom,x,y),sim,x,y),y),cpe(e(fom,x,y),sim,x,y),x),e(fom,x,y),sim,x,y) | | | f'(cp1(e(e(cpe(e(fom,x,y),sim,x,y),cpe(e(fom,x,y),sim,x,y),y),cpe(e(fom,x,y),sim,x,y),x),e(fom,x,y),y),f(e(fom,x,y),sim,y),x)

cp1(e(e(cpe(e(fom,x,y),sim,x,y),cpe(e(fom,x,y),sim,x,y),y),cpe(e(fom,x,y),sim,x,y),x),e(fom,x,y),y) | A | f'(cp2(e(e(cpe(e(fom,x,y),sim,x,y),cpe(e(fom,x,y),sim,x,y),y),cpe(e(fom,x,y),sim,x,y),x),e(fom,x,y),A),
//------End--cp(e(e(cpe(e(fom,x,y),sim,x,y),cpe(e(fom,x,y),sim,x,y),y),cpe(e(fom,x,y),sim,x,y),x),e(fom,x,y),sim,x,y)
//----------------------------------End Compare and Erase---------------------