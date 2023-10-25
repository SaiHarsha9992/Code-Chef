# cook your dish here
# cook your dish here
t=int(input())
for i in range(t):
    a1,a2,b1,b4=map(int,input().split())
    sub=((a1-a2)+(b1-b4))
    if sub<0:
        print("yes")
    else:
        print("no")