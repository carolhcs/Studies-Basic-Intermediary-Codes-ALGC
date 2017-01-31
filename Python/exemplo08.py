##Dicionários 1

DIC = {'produto' : 'copo', 'cor' : 'azul', 'preço' : 14}
print(DIC)
print(DIC['cor'])


D = {}
D['nome'] = 'Carol'
D['Sobrenome'] = 'Salvato'
D['empresa'] = 'ALGC'

print(D)
print(D['nome'])


##Dicionario 2
print()
R = {'nome' : {'primeiro' : 'Carol','ultimo' : 'Salvato'},'conhecimentos':['Python','C#','Java'], 'idade':23}
print(R)

print(R['nome']) #retorna o nome completo
print(R['nome']['primeiro']) #retorna o primeiro nome
print(R['conhecimentos']) #retorna a lista completa
print(R['conhecimentos'][-1]) #ultimo elemento da lista
R['conhecimentos'].append('IPv6') #insere um item na lista
print(R)
print()

##Dicionario 3

d = {'b' : 2, 'a' : 1, 'd' : 4, 'c' : 3}

ordenada = list(d.keys()) #crio lista com chaves do dicionario

ordenada.sort() #sort ordena

for key in ordenada:
    print(key, '=' , d[key]) #retorna a chave e valor mapeado
print()

for key in sorted(d):
    print(key, '=' , d[key])
print()