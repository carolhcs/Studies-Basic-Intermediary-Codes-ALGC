s = "pizza"
r = "    pizz a"
i = "lua,carol,marte,terra"
print (s) #Imprime o valor da variável s
print (s.find("iz")) #encontra a posição de uma string
print (s.replace("zz","nhão")) #Troca zz da palavra pizza por nhão
print (s.upper()) #Converte para maiuscula
print (s.lower()) #converte para minuscula
print (s.isalpha()) #teste de conteudo (e alfabetica?)
print (s.isalnum()) #teste de conteúdo (e alfa numérica?)
print (r.lstrip()) #retornaumacopiada string comcaracteres a esquerda removidos.Se nao forem especificados, elimina espaços em branco
print (s.lstrip("p"))
print (s.capitalize()) #retorna a string com o primeiro carácter em maiúsculo
print (i.split(",")) #retorna umalista de itens delimitados pelo caractere especificado