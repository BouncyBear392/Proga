--- ПРОГРАММА НА 3 ---
print("Введите число")
a = io.read("*n")
x = 1
for i = 1,a,1 do
    x = x*io
end
print(x)


--- ПРОГРАММА НА 4 ---
print("Введите число элементов")
a = io.read("*n")

sum = 0
for i=1,a,1 do
    r = math.random(100)
    print(r)
    sum=sum+r
end
print("Сумма всех элементов = ", sum)


--- ПРОГРАММА НА 5 ---