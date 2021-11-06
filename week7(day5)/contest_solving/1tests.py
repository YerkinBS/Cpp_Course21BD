import random
n = random.randint(10, 30)
print(str(n) + '\n' + ' '.join([str(random.randint(1, 10)) for i in range(n)]))