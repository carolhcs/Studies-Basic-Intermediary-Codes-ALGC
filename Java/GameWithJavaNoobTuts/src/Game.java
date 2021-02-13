/*
 * This project is maked follow NoobTuts tutorials <https://noobtuts.com/java>!
 * Download <https://www.lwjgl.org/>
 * stop here: https://noobtuts.com/java/opengl-renderer
 */

/**
 *
 * @author CarolHCS
 */
public class Game extends Renderer {
    public static void main(String[] args) {
        // Create game instance
        Game game = new Game(width, height, "WindowTitleExample");
    }

    // onStart will be called by the Renderer. We simply put
    // our OpenGL initializations in here.
    public void onStart() {
        // load a texture
        // load a 3d model
        // etc.
    }

    // onUpdate will be called all the time in a loop
    public void onUpdate() {
        // calculate positions etc.
    }

    // onDraw3D will be called all the time in a loop. Everything
    // that 3D has to be drawn will be drawn here.
    public void onDraw3D() {
        // draw the sun
        // draw the ocean
        // etc.
    }

    // onDraw2D will be called all the time in a loop. Everything
    // that 2D has to be drawn will be drawn here.
    public void onDraw3D() {
        // draw the HUD
        // etc.
    }

    // onEnd will be called by the Renderer. We simply free
    // everything that has been initialized here.
    public void onEnd() {
        // free a texture
        // free a 3d model
        // etc.
    }
}