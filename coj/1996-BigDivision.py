def gcd(a, b):
	return gcd(b, a%b) if b else a


try:
	t = int(raw_input())
	for i in range(t):
		n = raw_input()
		factor = 1
		current = raw_input()
		temp = 0

		for j in current:
			if j == ' ' or j == '\n':
				factor *= temp
				temp = 0
			else:
				temp *= 10
				temp += int(j)

		print factor
		nfactor = factor
		factor = 1
		current = raw_input()

		temp = 0
		for j in current:
			if j == ' ' or j == '\n':
				factor *= temp
				temp = 0
			else:
				temp *= 10
				temp += int(j)
		print factor
		
		mfactor = factor
		
		greatcommondivisor = gcd(nfactor, mfactor)

		print "Case #" + str(i + 1) + ": " + str(nfactor / greatcommondivisor) + " / " + str(mfactor / greatcommondivisor)
	
except EOFError:
    exit