t=input()
h= int(t.split()[0])
m= int(t.split()[1])
if(m>=45):
    print("%s %s"%(h,(m-45)))
elif(h==0):
    print("23 %s"%(15+m))
else:
    print("%s %s" %((h-1),(15+m)))
