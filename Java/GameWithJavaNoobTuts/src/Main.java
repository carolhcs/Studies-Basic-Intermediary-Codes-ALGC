/*
 * This project is maked follow NoobTuts tutorials <https://noobtuts.com/java>!
 */

/**
 *
 * @author CarolHCS
 */
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello World!"); // Display the string
        //vectorsExemplesUsages();
        
        
        
    }
    
    
    void vectorsExemplesUsages() {
        //Vector 2 functions usages
        // Create a Vector2 with x = 0 and y = 0
        Vector2 v = new Vector2();
        // Create a Vector2 with x = 1 and y = -2
        Vector2 w = new Vector2(1.0f, -2.0f);
        v.y = 3.0f; //Modify value
        if (v.equals(w)) { //  v == w this is very bad
            // do something
        }
        Vector2 a = new Vector2(0.0f, -1.0f);
        Vector2 b = new Vector2(0.0f, 2.0f);
        double dist = Vector2.distance(a, b);
        Vector2 v2 = new Vector2(42.0f, 0.0f);
        v2.normalize();
    }
    
    void intervalExemplesUsages() {
        //Interval functions usages
        Interval i = new Interval();
        //myAlgorithm();

        System.out.println("it took: " + i.value() + " ms");
        // => it took 5 ms (etc.)
        long start = System.currentTimeMillis();
        //myAlgorithm();
        long elapsed = System.currentTimeMillis() - start;
        System.out.println("It took " + elapsed + " ms");
        // Do something for not longer than 50 milliseconds
        while (i.value() < 50) {
            //doStuff();
        }
    }
    
    // For exemple, respawn monsters;
    Interval respawnInterval = null;
    void playerTryToRespawn() {
        // 10 seconds elapsed already?
        if (respawnInterval.value() >= 10000) {
            // respawn
        }
    }
}
