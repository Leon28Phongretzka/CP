def genbin(n,s,zeros,ones):
    if(len(s)==n):
        # print s with spaces and not endline
        print(s)
        return
    if(zeros<n/2):
        genbin(n,s+"0",zeros+1,ones)
    if(ones<n/2):
        genbin(n,s+"1",zeros,ones+1)

t=int(input())
for i in range(t):
    n=int(input())
    if(n&1):
        print(-1)
    else:
        genbin(n,"",0,0)

