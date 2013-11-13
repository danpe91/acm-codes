
t = raw_input()

try:
	t = int(t)
	
	for i in range(t):
		n = {}
		m = {}
		for j in range(1001):
			n[j] = j * (j + 1) * (j + 2)

			if j == 0:
				m[j] = 0
			else:
				m[j] = m[j - 1] + n[j]

		inp = raw_input()
		a = int(inp.split(" ")[0])
		b = int(inp.split(" ")[1])

		print((m[b] - m[a - 1]) % 100)
except EOFError:
    exit
