def fib(n):
	if n<2:
		return 0 if n < 1 else n
	else:
		return fib(n-1) + fib(n-2)

print fib(40)