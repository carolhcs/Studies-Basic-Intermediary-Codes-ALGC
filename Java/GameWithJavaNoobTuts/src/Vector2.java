/*
 * This project is maked follow NoobTuts tutorials <https://noobtuts.com/java>!
 */

/**
 *
 * @author CarolHCS
 */
public class Vector2 {
    
    // Vars
    public float x; //Position/Axis x
    public float y; //Position/Axis y
       
    // Constructors
    public Vector2() {
        this.x = 0.0f;
        this.y = 0.0f;
    }
    
    public Vector2(float x, float y) {
        this.x = x;
        this.y = y;
    }
       
    // Compare two vectors
    public boolean equals(Vector2 other) {
        return (this.x == other.x && this.y == other.y);
    }
    
    // The used formula is: squareRoot((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y))
    public static double distance(Vector2 a, Vector2 b) {
        float v0 = b.x - a.x;
        float v1 = b.y - a.y;
        return Math.sqrt(v0*v0 + v1*v1);
    }
    
    public void normalize() {
    // sets length to 1
        double length = Math.sqrt(x*x + y*y);
        if (length != 0.0) {
            float s = 1.0f / (float)length;
            x = x*s;
            y = y*s;
        }
    }
    
    
}