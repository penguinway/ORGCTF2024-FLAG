num_class = int(input())
classes = []
for i in range(num_class):
    classes.append(str(input()))
num_order = int(input())
orders = []
for i in range(num_order):
    name = str(input())
    orders[name] += 1
for order in orders:
    print(order)
# flag{ohhhhh-you-can-use-git-and-github}