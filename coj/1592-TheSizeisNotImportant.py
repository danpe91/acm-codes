tc = raw_input()
try:
    t = int(tc)

    for i in range(t):
        number1 = int(raw_input())
        number2 = int(raw_input())
        print number1 * number2
    
except EOFError:
    exit