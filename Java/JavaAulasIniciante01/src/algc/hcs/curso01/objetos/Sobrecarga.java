package algc.hcs.curso01.objetos;
/**
 *
 * @author Carol Salvato
 */
public class Sobrecarga {
    
    int somar(int n1, int n2){
        return n1+n2;
    }
    
    public static void main(String[] args){
        Sobrecarga objeto = new Sobrecarga();
        int soma = objeto.somar(50, 20);
        System.out.println(soma);
    }
    
}
