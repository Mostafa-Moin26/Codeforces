t = int(input())
for _ in range(t):
    s = list(map(ord,input()))
    
    for i in range(len(s)):
        for j in range(i, max(0,i-10), -1):
            if s[j-1] < s[j]-1:
                s[j-1], s[j] = s[j]-1, s[j-1]

    print(''.join(map(chr, s)))
