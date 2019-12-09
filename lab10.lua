--- ПРОГРАММА НА 3 ---
print("Введите A")
a=io.read("*n")
print("Введите B")
b=io.read("*n")
print("Введите C")
c=io.read("*n")

print("Введите D")
d=io.read("*n")
max = 0

if a == d or b == d or c == d then
if a == d then
print("chislo ",a," = ",d)
elseif b == d then
print("chislo ",b," = ",d)
elseif c == d then
print("chislo ",c," = ",d)
end
elseif a ~= d and b ~= d and c ~= d then
m = math.max(d-a,d-b,d-c)
print("max chislo = ",m)
end

--- ПРОГРАММА НА 4 ---
print("Введите стоимость книг")
book=io.read("*n")
print("Введите сумму, внесенную клиентом")
summa=io.read("*n")

if book == summa then
print("Спасибо за покупку :)")
elseif book > summa then
print("Вы дали слишком мало")
elseif book < summa then
sdacha = summa - book
print("Ваша сдача - ",sdacha)
end

--- ПРОГРАММА НА 5 ---
print("Введите минуты") minute=io.read("*n") a = 1 b = 0.8
c = 0.5
d = 0.3

if minute>50 then
i1 = 50
minute = minute-i1
else
i1 = minute
i2 = 0
i3 = 0
i4 = 0
end

if minute>30 then
i2 = 30
minute = minute - i2
else
i2 = minute
i3 = 0
i4 = 0
end

if minute>20 then
i3 = 20
minute=minute-i3
i4=minute
else
i3=minute
i4=0
end
x = i1*a + i2*b + i3*c + i4*d
rub = math.floor(x)
kop = math.floor((x-rub)*100)
print("Стоимость = ",rub," руб. ",kop," копеек.")