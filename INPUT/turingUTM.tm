20000
ee;_D_A_D_D_C_R_D_A_A_;_D_A_A_D_D_C_C_R_D_A_#
1
b
//ee;_D_A_D_D_C_R_D_A_A_;_D_A_A_D_D_R_D_A_A_A_;_D_A_A_A_D_D_C_C_R_D_A_A_A_A_;_D_A_A_A_A_D_D_R_D_A_#
//print at end--------------------------
pe(cVar, beta) |  |  | f(pe1(cVar, beta), cVar, e)

pe1(cVar, beta) | any  | R, R | pe1(cVar, beta)
pe1(cVar, beta) | none | Pbeta | cVar

pe2(cVar, alpha, beta) |  |  | pe(pe(cVar, beta), alpha)
//--------------------------------------

//Erase---------------------------------
//Erase All
e(beta, alpha) |  |  | e(e(beta, alpha), beta, alpha)

//Erase First
e(cVar, beta, alpha) |  |  | f(e1(cVar, beta, alpha), beta, alpha)

e1(cVar, beta, alpha) |  |  E | cVar

e(cVar) | e | R | e1(cVar)
e(cVar) |   | L | e(cVar)

e1(cVar) | any  | R, E, R | e1(cVar)
e1(cVar) | none |         | cVar
//-------------------------------------

//Copy all marked by A and un-mark---------
ce(cVar, beta, alpha) |  |  | c(e(cVar, beta, alpha), beta, alpha)

ce(beta, alpha) |  |  | ce(ce(beta, alpha), beta, alpha)

ce2(cVar, alpha, beta) |  |  | ce(ce(cVar, beta), alpha)

ce3(cVar, alpha, beta, Y) |  |  | ce(ce2(cVar, beta, Y), alpha)

ce4(cVar, alpha, beta, Y, X) |  |  | ce(ce3(cVar, beta, Y, X), alpha)

ce5(cVar, alpha, beta, Y, X, Z) |  |  | ce(ce4(cVar, beta, Y, X, Z), alpha)
//----------------------------------------

//Copy to End------------------------
c(cVar, beta, alpha) |  |  | f'(c1(cVar), beta, alpha)

c1(cVar) | any |  | pe(cVar, scanned) 
//-----------------------------------

//Move Left and go to C
l(cVar) |  | L | cVar
//Move RIght and go to C
r(cVar) |  | R | cVar

//Find first and move left
f'(cVar, beta, alpha)  |  |  | f(l(cVar), beta, alpha)
//Find First and Move Right
f''(cVar, beta, alpha) |  |  | f(r(cVar), beta, alpha)

//Find First--------------------------------
f(cVar, beta, alpha) | e | L | f1(cVar, beta, alpha)
f(cVar, beta, alpha) |   | L | f(cVar, beta, alpha)

f1(cVar, beta, alpha) | alpha    |   | cVar
f1(cVar, beta, alpha) | none | R | f2(cVar, beta, alpha)
f1(cVar, beta, alpha) |      | R | f1(cVar, beta, alpha)

f2(cVar, beta, alpha) | alpha    |   | cVar
f2(cVar, beta, alpha) | none |   | beta
f2(cVar, beta, alpha) |      | R | f1(cVar, beta, alpha)
//------------------------------------------

//Replace----------------------------------
re(cVar, beta, alpha, dVar) |  |  | f(re1(cVar, beta, alpha, dVar), beta, alpha)

re1(cVar, beta, alpha, dVar) |  | E, PdVar | cVar

re(beta, alpha, dVar) |  |  | re(re(beta, alpha, dVar), beta, alpha, dVar)
//-----------------------------------------

//Copy and Replace----------------------------
cr(cVar, beta, alpha) |  |  | c(re(cVar, beta, alpha, *), beta, alpha)

cr(beta, alpha) |  |  | cr(cr(beta, alpha), re(beta, *, alpha), alpha)
//--------------------------------------------

//Compare and Erase--------------------------
cp(cVar, U, G, alpha, beta) |  |  | f'(cp1(cVar, U, beta), f(U, G, beta), alpha)

cp1(cVar, U, beta) | any |  | f'(cp2(cVar, U, scanned), U, beta)

cp2(cVar, U, Y) | Y |  | cVar
cp2(cVar, U, Y) |   |  | U

cpe(cVar, U, G, alpha, beta) |  |  | cp(e(e(cVar, cVar, beta), cVar, alpha), U, G, alpha, beta)

cpe(U, G, alpha, beta) |  |  | cpe(cpe(U, G, alpha, beta), U, G, alpha, beta)
//-------------------------------------------

//Find Last----------------------------------
g(cVar) | any  | R | g(cVar)
g(cVar) | none | R | g1(cVar)

g1(cVar) | any  | R | g(cVar)
g1(cVar) | none |   | cVar

g(cVar, alpha) |  |  | g(g1(cVar, alpha))

g1(cVar, alpha) | alpha |   | cVar
g1(cVar, alpha) |   | L | g1(cVar, alpha)
//-------------------------------------------

//Configuration------------------------------
con(cVar, alpha) | A | L, Palpha, R | con1(cVar, alpha)
con(cVar, alpha) |   |   R, R       | con(cVar, alpha)

con1(cVar, alpha) | A    | R, Palpha, R           | con1(cVar, alpha)
con1(cVar, alpha) | D    | R, Palpha, R           | con2(cVar, alpha)
con1(cVar, alpha) | none | PD, R, Palpha, R, R, R | cVar

con2(cVar, alpha) | C | R, Palpha, R | con2(cVar, alpha)
con2(cVar, alpha) |   | R, R         | cVar
//-------------------------------------------

//Table for U---------------------------------------------------------------

b |  |  | f(b1, b1, #)

b1 |  | R, R, P:, R, R, PD, R, R, PA | anf

anf |  |  | g(anf1, :)

anf1 |  |  | con(kom, y)

kom | ; | R, Pz, L | con(kmp, x)
kom | z |   L, L   | kom
kom |   |     L    | kom

kmp |  |  | cpe(e(e(anf, x), y), sim, x, y)

sim  |  |  | f'(sim1, sim1, z)
sim1 |  |  | con(sim2, _)

sim2 | A |  | sim3
sim2 |   | L, Pu, R, R, R | sim2

sim3 | A | L, Py, R, R, R | sim3
sim3 |   | L , Py | e(mk, z)

mk |  |  | g(mk1, :)

mk1 | A | L, L, L, L | mk2
mk1 |   | R, R       | mk1

mk2 | C | R, Px, L, L, L | mk2
mk2 | : |                | mk4
mk2 | D | R, Px, L, L, L | mk3

mk3 | : |                | mk4
mk3 |   | R, Pv, L, L, L | mk3

mk4 |  |  | con(l(l(mk5)), _)

mk5 | any  | R, Pw, R | mk5
mk5 | none | P:       | sh

sh |  |  | f(sh1, inst, u)

sh1 |  | L, L, L | sh2

sh2 | D | R, R, R, R | sh3
sh2 |   |            | inst

sh3 | C | R, R | sh4
sh3 |   |      | inst

sh4 | C | R, R | sh5
sh4 |   |      | pe2(inst, 0, :)

sh5 | C |  | inst
sh5 |   |  | pe2(inst, 1, :)

inst |  |  | g(l(inst1), u)

inst1 | L | R, E | ce5(ob, v, y, x, u, w)
inst1 | R | R, E | ce5(ob, v, x, u, y, w)
inst1 | N | R, E | ce5(ob, v, x, y, u, v)

ob |  |  | e(anf)
