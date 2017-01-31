#Listas

L1 = []
L2 = [0,1,2,3,4,5]
L3 = ["a","b","c"]
L4 = ["a",["b","c","d"]]

print (L2)

list (L3)

print (L2 + L3) #Concatenação
print (L3 * 5) #Repetição
print ("b" in L3) #Verificação de existência

for x in L2: ##Iteração
    print(x)
    
print (L2.append(8)) #acrescenta itens
print (L2)
print (L2.insert(7,9)) #acrescenta itens na posição
print (L2)
print (L2.index(2)) #busca de posição por valor
print (L2.count(3)) #contagem de ocorrências de x

## Métodos para Listas parte 2

l = [3,2,1,5,6]

print(l)
l.sort()#ordena a lista
print(l)
l.reverse()#reverte a lista
print(l)
l.remove(1)#remove a primeira ocorrência do item
print(l)
l.pop(3)#remove item na posição de índice especifica
print(l)
#print(del l[0])#o msm q a cima
print(l)

#del l [i:j] Remove os itens da posição i ate j

## Métodos para Listas Parte 3

print()

Lista = [1,2,3,4,5]

print(Lista)

#L[i] = valor ##Atribuição de valor a posição i
Lista[2] = 5
Lista[4] = 8
print(Lista)

#L[i:j] = [x1,x2,x3...] ##Atribuição de valores ao intervalo
Lista[2:4] = [9,8,7]
print(Lista)

#L2 = [x + 1 for x in L] ##Cria lista L2 com os elementos de L incrementados
List2 = [x + 1 for x in Lista]
print(List2)

#len(L) ##Retorna o tamanho da lista
print(len(Lista))

#list(L) ##Retorna os elementos da lista
print(list(Lista))

#map(f,lista) ##Aplica a função f a cada um dos elementos da lista; para ver o resultado combine com list()
import math

print(list(map(math.sqrt, Lista)))