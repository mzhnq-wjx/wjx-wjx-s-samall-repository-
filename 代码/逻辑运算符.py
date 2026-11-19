# and or not
a,b,c,d=1,2,3,4
print (a+b>c and c<d)
print (a<b and c<d)
print (a+b>c or c<d)
print (not a>b)
#优先级（）->not->and->or
print (2>1 and 1<4 or 2<3 and 9<6 or 2<4 and 3<2)