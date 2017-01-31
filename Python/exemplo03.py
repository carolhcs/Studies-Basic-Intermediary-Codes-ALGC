# loop while e break

contador = 0
while (contador < 9):
    print('O valor do contador e %d' %contador)
    contador +=1
print('Loop encerrado!')
print()


controle=''
while (controle != 's'):
    print('a.Pagar')
    print('b.Receber')
    print('c.Consultar')
    print('s.Sair')
    controle = input('Digite a opcao desejada:')
print('Loop encerrado')
print()


var = 20
while(var > 0):
    print('O valor de var e %d' %var)
    var -= 1
    if(var == 11):
        break
print('Loop interrompido no valor 11')
print()
print()

# loop for range

varX = 'Pyton'
for x in varX:
    print(x)
print()

frutas = ['laranja','morango','guarana','açaí']

for y in frutas:
    print('Fruta: %s' %y)
print()

#range(11) ##valores de 0 a 10
#range(5,11) ##valores de 5 a 10
#range(2,50,2) ##valores de 2 a 50 saltando de 2 em 2

for z in range(11):
    print(z)
print()

for w in range(0,51,5):
    print(w)
print()