def get_trailing_zeros(number):
	zeros = 1
	while number > 0:
		zeros = zeros * 10 if ((number / 10 ) > 0) else zeros
		number = number / 10
	return zeros

try:
	while True:
		n = int(raw_input())
		num = 0
		count = 0
		i = 1
		while i <= n:
			num = num * 10
			num = num * get_trailing_zeros(i)
			num += i
			count = count  + 1 if num % 3 == 0 else count
			i += 1
		print count
		print

	
except EOFError:
    exit