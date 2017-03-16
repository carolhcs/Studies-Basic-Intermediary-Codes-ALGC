package algc.hcs.curso01.objetos;

/**
 *
 * @author Carol Salvato
 */
public class Principal {
    
    int somarNumeros(int ... numeros){
        int soma = 0;
        for(int n : numeros) {
            soma += n;
        }
        return soma;
    }
    
    public static void main(String[] args){
        Pessoa eu = new Pessoa();
        eu.mostrarNome("Carol");
        int idade = eu.calcularIdade(1992, 2017);
        System.out.println("A idade é: " +idade);
        Principal teste = new Principal();
        int soma = teste.somarNumeros(12,34,67,89,1);
        System.out.println("A soma é: " +soma);
    }
    
}
