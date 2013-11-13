nc = raw_input()
try:
    n = int(nc)
    suma = 0
    for i in range(n):
        number = int(raw_input())
        suma = suma + number
    print suma % 128
    
except EOFError:
    exit