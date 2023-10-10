# cook your dish here
for _  in range(int(input())):
    n = int(input())
    om = list(map(int,input().split()))
    addy = list(map(int,input().split()))
    om1,addy1=[],[]
    o,a=0,0
    for i in om:
        if i==0:
            o=0
        else:
            o+=1
        om1.append(o)
    for i in addy:
        if i==0:
            a=0
        else:
            a+=1
        addy1.append(a)
    om1.sort()
    addy1.sort()
    if om1[n-1]>addy1[n-1]:
        print('Om')
    elif addy1[n-1]>om1[n-1]:
        print('Addy')
    else:
        print('Draw')
    