# Sequencia de Fibonacci ALGC - Busca o numero mais aproximado dentro da sequencia
def fib (n):
	""" Retorna uma lista contendo os n primeiros numeros da serie de Fibonacci."""
	x = []
	a, b = 0, 1
	while a < n:
		x.append(a) 
		a, b = b, a+b
	return x

ok = True
while ok:
	data = int (input("Entre com a quantidade de numeros desejada:"))
	if data == 0:
		ok = False
	else:
		print(fib(data))