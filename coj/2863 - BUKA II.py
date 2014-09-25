try:
	
	a = int(raw_input())
	operator = raw_input()
	b = int(raw_input())
	result = 0

	if operator == '+':
		result = a + b
	elif operator == '-':
		result = a - b
	elif operator == '*':
		result = a * b
	elif operator == '/':
		result = a / b
	elif operator == '%':
		result = a % b
	
	print result
except EOFError:
		exit