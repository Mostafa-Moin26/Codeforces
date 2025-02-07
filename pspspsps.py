for _ in range(int(input())):
    n=int(input())
    s=input()
    if "p" not in s[:-1] or "s" not in s[1:]:
        print("YES")
    else:
        print("NO")
