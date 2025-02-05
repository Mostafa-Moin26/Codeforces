import sys

def solve():
    n = int(input())
    d = -10**18
    l = lm = ms = ps = l2 = lm2 = 0
    maksms = maksps = maks = 0
    mini = 0
    z = 0
    r = set()
    j = 0

    arr = list(map(int, sys.stdin.readline().split()))  # Read all input at once for efficiency

    for i in range(n):
        x = arr[i]
        z += x
        l = max(l + x, 0)
        l2 = min(l2 + x, 0)

        if x != -1 and x != 1:
            d = x
            j = i
            break

        maks = max(maks, z)
        mini = min(mini, z)
        lm = max(lm, l)
        lm2 = min(lm2, l2)

    if d != -10**18:
        ps = ms = 0
        r.add(d)
        l = l2 = 0
        maxd = z - maks
        mind = z - mini

        for i in range(maxd, mind + 1):
            r.add(i)

        for i in range(j + 1, n):
            x = arr[i]
            z += x
            l = max(l + x, 0)
            l2 = min(l2 + x, 0)

            if z - maks < maxd:
                maxd = z - maks
                r.add(maxd)

            if z - mini > mind:
                mind = z - mini
                r.add(mind)

            lm = max(lm, l)
            lm2 = min(lm2, l2)

    r.add(0)

    for i in range(1, lm + 1):
        r.add(i)

    for i in range(1, abs(lm2) + 1):
        r.add(-i)

    print(len(r))
    print(*sorted(r))

if __name__ == "__main__":
    sys.stdin = open(0)  # Ensure fast input handling
    t = int(input())
    for _ in range(t):
        solve()
