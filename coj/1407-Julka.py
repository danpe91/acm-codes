try:
    
    for i in range(10):
    	both = int(raw_input())
    	more = int(raw_input())

    	print (both / 2) + (more / 2)
    	print (both / 2) - (more / 2)
    
except EOFError:
    exit