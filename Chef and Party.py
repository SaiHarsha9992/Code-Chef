# cook your dish here
for _ in range (int(input())):
    n= int(input())
    a=list(map(int,input().split()))
    b=[]
    a.sort()
    for i in a:
        if i <= len(b):
            b.append(i)
        else:
            break
    print(len(b))