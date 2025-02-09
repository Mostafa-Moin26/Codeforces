for _ in range(int(input())):
	s = input()
	if s.count('0') == 0: print(1,len(s),1,1); continue
	z = s.index('0')
	
	best = ""
	besti = -1
	e = s[z:]
	for i in range(z):
		f = s[i:-z+i]
		g = "".join( ("0" if e[i]==f[i] else "1" for i in range(len(e))) )
		if g > best:
			besti = i
			best = g
	print(1,len(s),besti+1,len(s)-z+besti)
		
	
	