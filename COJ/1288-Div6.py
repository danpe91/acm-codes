import math
tc = raw_input()
try:
    t = int(tc)

    for i in range(t):
        number = int(raw_input())
        print "YES" if (number % 6 == 0) else "NO"
    
except EOFError:
    exit