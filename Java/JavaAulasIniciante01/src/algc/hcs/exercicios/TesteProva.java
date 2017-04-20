/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package algc.hcs.exercicios;

/**
 *
 * @author carolhcs
 */
public class TesteProva {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) { 
        int x = 1; 
        int y = 3; 
        int z = 6;
        x += calcula(y++ + ++z);
        System.out.println("O resultado é: ");
        System.out.println(x);
}
public static int calcula(int x) { 
    return x * 2; 
}
public static int calcula(int y, int z) { 
    return  z - y; 
}

}
