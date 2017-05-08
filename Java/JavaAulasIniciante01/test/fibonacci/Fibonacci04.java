/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * RECURSIVA COM VETOR
 */
package fibonacci;
import java.util.Scanner;
/**
 * @author carolhcs
 */
public class Fibonacci04 {
    private static int[] vetAux = new int[50];
    private static int k;

    public static long fib(int n) {      
        k = 1;
        return recursao(n);
    }

    private static long recursao(int n) {
        if (n < 0) { 
            return vetAux[0];  
        } else { 
            if (k < 3) {
                vetAux[n] = k - 1; 
                k++; 
            } else {
                vetAux[n] = vetAux[n + 1] + vetAux[n + 2]; 
            }
            return recursao(n - 1);
        }
    }
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int y;
        System.out.printf("Informe a quantidade de termos que deseja para a sequencia: ");
        y = ler.nextInt();
        for (int i = 0; i < y; i++) {
            System.out.print("(" + i + "):" + Fibonacci04.fib(i) + "\t");
        }
    }
}
