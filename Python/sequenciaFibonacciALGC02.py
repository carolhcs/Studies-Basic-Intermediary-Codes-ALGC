# Sequencia de Fibonacci ALGC
x, y, fib, num = 0, 1, 0, 0
ok = True
while ok:
	data = int (input("Entre com a quantidade de termos que deseja na sequencia: "))
	if data == 0:
		ok = False
	else:
		while (num < data):
			if num <= 1:
				fib = num
			else:
				fib = x + y
				x = y
				y = fib
			print(fib)
			num = num + 1
		x, y, fib, num = 0, 1, 0, 0
