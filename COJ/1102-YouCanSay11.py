values = raw_input()
try:
    while values:
        value = int(values)
        if value == 0:
        	break
        ismod = " "
        if (value % 11) != 0:
        	ismod = " not "
        print str(value) + " is" + ismod + "a multiple of 11."

        values = raw_input()
except EOFError:
    exit