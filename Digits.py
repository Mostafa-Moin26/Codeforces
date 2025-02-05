t = int(input())  

for _ in range(t):
    n, d = map(int, input().split())  
    result = [1]  

    if n >= 3 or d % 3 == 0:
        result.append(3)
    if d == 5:
        result.append(5)
    if n >= 3 or d == 7:
        result.append(7)
    if d == 9 or n >= 6 or (n >= 3 and d % 3 == 0):
        result.append(9)

    print(*result)  
