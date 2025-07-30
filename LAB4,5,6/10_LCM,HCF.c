/*
FOR LCM
=======================
whats LCM?? 
LCM is the least common multiple of 2 or more number
a number which when divided by each number leaves remainder as ZERO
example- LCM(a,b,c)=d then d%a==0, d%b==0, d%c==0
LCM can be calculated by the formula 
LCM = a*b/GCD(a,b) where GCD- greatest common divisor
this formula comes from application of Eculideans algorithm 
which states that GCD(a,b)=GCD(b,a%b) this can work when a>b or b<a 

FOR HCF
=======================
whats HCF?
HCF is highest common factor, which means that when HCF is taken for few numbers,
the hcf would divide all the numbers LEAVING rem==0
example= HCF(a,b,c)=d then a%d==0, b%d==0, c%d==0
HCF = GCD
HCF of two prime numbers is 1.
HCF is always ≤ the smaller of the two numbers.
HCF(a, b) = HCF(b, a)


================================
HCF(a,b)×LCM(a,b)=a×b
================================
Euclid’s Division Lemma:
a=bq+r, where 0≤r<b
GCD(a,b)=GCD(b,a%b)

*/