package algc.hcs.curso01.objetos;

/**
 *
 * @author Carol Salvato
 */
public class Construtores {
    
    public static void main (String[] args){
        Pessoa objeto = new Pessoa("Carol", 24);
        System.out.println(objeto.nome);
        System.out.println(objeto.idade);
    }
    
}
