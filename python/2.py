x = ("apple", "orange", "kiwi", "cherry")
y = ("banana", "tomato", "potato")
x = list(x)
x.remove("apple")
x = tuple(x)

for i in range(len(x)):
    print(x[i])

(yellow, red, brown) = y
print(yellow)
print(red)
print(brown)

j = 0

while j < len(y):
    print(y[j])
    j += 1