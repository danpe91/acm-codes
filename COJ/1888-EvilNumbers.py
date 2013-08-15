def containssix (number):
	while number > 0:
		if (number % 10) == 6:
			return True;
		number /= 10
	return False

def ismultipleofsix (number):
	return (number % 6) == 0

def sumismultipleofsix (number):
	sum = 0

	while number > 0:
		sum += number % 10
		number /= 10

	return ismultipleofsix(sum);

def isevil (number):
	return containssix(number) and ismultipleofsix(number) and sumismultipleofsix(number)

try:
    while True:
    	n = int(raw_input())
    	print "EVIL" if isevil(n) else "GOOD"
except EOFError:
    exit