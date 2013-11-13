try:
	value = int(raw_input())
	while value != 0:
		max = [0, 0, 0]

		for i in range(value):
			line = raw_input()
			line = line.split(" ")
			base = int(line[0])
			exponent = int(line[1])
			result = base ** exponent
			if result > max[0]:
				max[0] = result
				max[1] = base
				max[2] = exponent
		print str(max[1]) + " " + str(max[2])
		value = int(raw_input())
except EOFError:
    exit
