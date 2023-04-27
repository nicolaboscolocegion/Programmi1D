import time

start_time = time.time()
i=0
b=0
for i in range(0, 2147483647):
    b=0
    
print("il programma ci ha messo: %s s" % (time.time() - start_time))