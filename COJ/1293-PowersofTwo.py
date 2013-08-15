import math
values = raw_input()
try:
    value = int(values)
    
    print int(math.pow(2, value))
except EOFError:
    exit