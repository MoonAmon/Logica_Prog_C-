A=list(range(1,80))
B=[]
X=1
e=1

for i in A:
    for e in range(e,i+1):
        X*=e
    B.append(X)

print(B)