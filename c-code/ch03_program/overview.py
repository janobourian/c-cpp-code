import time
num = 0
start_time = time.perf_counter()
for i in range(100000000000):
    num += i
end_time = time.perf_counter()
print("Time taken:", end_time - start_time)