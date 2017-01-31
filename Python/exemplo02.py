# Função print

x = "Carol"
y = 22

print(x)
print (y)
print ("Qual seu nome?")
print ("Meu nome e %s" % x) #substitua s pela variável x
print ("Meu nome e %s e tenho %d anos" % (x,y))

# método str.format

print("A {0} custa {1} reais".format(x,y))
print ("Gosto da {0}, mas {1} reais esta caro para uma {0} !".format(x,y))