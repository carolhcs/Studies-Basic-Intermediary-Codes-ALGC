nota1 = 8.00
nota2 = 7.00
media = (nota1 + nota2) / 2

if media >= 7.00:
    print("O aluno foi aprovado!\n")
    print("Parabens!")

else:
    if media >= 5.00:
        print ("O aluno esta de recuperação!\n")
        print ("Estude mais!!")

    else:
        print ("O aluno foi reprovado...")
        print ("Estude mais!!")

print ("A media e %f " % media)