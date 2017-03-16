package algc.hcs.curso01.objetos;

/**
 *
 * @author Carol Salvato
 */
public class Pessoa {
    
    String nome = "Carol";
    int idade;
    
    Pessoa(){}
    
    Pessoa(String nome){
        this.nome = nome;
        System.out.println(this.nome);
    }
    
    Pessoa(String n, int i){
        System.out.println("Iniciou!");
        nome = n;
        idade = i;
    }
    
    void mostrarNome(String nome) {
        System.out.println("O nome é: " +nome);
    }
    
    int calcularIdade(int anoNascimento, int anoAtual){
        return anoAtual - anoNascimento;
    }
    
}
