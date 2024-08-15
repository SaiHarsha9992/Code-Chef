# cook your dish here
for _ in range(int(input())):
    n=int(input())
    w=list(map(int,input().split()))
    maxi=max(w)
    f=w.index(maxi)
    l=n-w[::-1].index(maxi)-1
    if(l-f>n//2):
        print(0)
    else:
        print(n//2-(l-f))