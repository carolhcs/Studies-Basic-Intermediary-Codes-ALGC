/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * RECURSIVA UTILIZANDO O OPERADOR TERNÁRIO
 */
package fibonacci;
import java.util.Scanner;
/**
 * @author carolhcs
 */
public class Fibonacci02 {
    
    static long fib(int n) {
        return (n < 2) ? n : fib(n - 1) + fib(n - 2);
    }
    
    public static void main(String[] args) {
	Scanner ler = new Scanner(System.in);
        int y;
        System.out.printf("Informe a quantidade de termos que deseja para a sequencia: ");
        y = ler.nextInt();
        for (int i = 0; i < y; i++) {
            System.out.print("(" + i + "):" + Fibonacci02.fib(i) + "\t");
        }
 
    }
    
}
