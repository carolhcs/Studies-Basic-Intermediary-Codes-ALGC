/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaaulasiniciante01;

/**
 *
 * @author carolhcs
 */
public class JavaAulasIniciante01 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        // Aula 01
        /*boolean flag = 5 > 2;
        
        if (flag){
            System.out.println("Flag Verdadeira");
        } else {
            System.out.println("Flag Falsa");
        }
        System.out.println(5.0/2);
        System.out.println(3.0/5.0*2+3-0.5);*/
        
        //Aula 02 ATM
        /*int originalAmount = 1245;
        int amount = originalAmount;
        int n100 = amount / 100;
        amount %= 100;
        int n50 = amount / 50;
        amount %= 50;
        int n20 = amount / 20;
        amount %= 20;
        int n10 = amount / 10;
        amount %= 10;
        int n5 = amount / 5;
        amount %= 5;
        int n2 = amount / 2;
        amount %= 2;
        System.out.println("Notas de R$ 100,00: " +n100);
        System.out.println("Restos: " +amount);*/
        
        //Aula 03 ATM
       /* int originalAmount = 2356;
        int amount = originalAmount;

        System.out.println("Dividindo R$ " + originalAmount + " em notas de R$ 100, " + " R$ 50,  R$ 20,  R$ 10,  R$ 5,  R$ 2,  R$ 1, ");

        int[] billValues = {100, 50, 20, 10, 5, 2, 1};
        int[] numberOfBills = new int[billValues.length];

        for (int i=0; i < billValues.length; i++){
            //System.out.println(billValues[i]);
            numberOfBills[i] = amount / billValues[i];
            amount %= billValues[i];
            System.out.println("Notas de R$ " + billValues[i] + ": " + numberOfBills[i]);
        }*/
       
       //Aula 04
       /*int diaDaSemana = 5;
       String nomeDoDia;
       switch (diaDaSemana) {
           case 1: nomeDoDia = "Domingo"; break;
           case 2: nomeDoDia = "Segunda"; break;
           case 3: nomeDoDia = "Terça"; break;
           case 4: nomeDoDia = "Quarta"; break;
           case 5: nomeDoDia = "Quinta"; break;
           case 6: nomeDoDia = "Sexta"; break;
           case 7: nomeDoDia = "Sabado"; break;
           default: nomeDoDia = "Valor Invalido";break;
       }
       System.out.println(nomeDoDia);*/
       
       //Aula 05
       
    }
    
}
