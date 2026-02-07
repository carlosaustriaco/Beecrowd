a,b=map(int, input().split())

if (a>=b):
    m=a
    n=b
else:
    m=b
    n=a

if(m%n==0):
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")