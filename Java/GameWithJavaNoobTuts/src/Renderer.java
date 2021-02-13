/*
 * This project is maked follow NoobTuts tutorials <https://noobtuts.com/java>!
 * Download <https://www.lwjgl.org/>
 * stop here: https://noobtuts.com/java/opengl-renderer
 */

/**
 *
 * @author CarolHCS
 */

import java.awt.*;

public class Renderer {
    // Window Size
    int m_width;
    int m_height;
       
    // Timing
    Interval m_elapsed = new Interval();

    public int getWidth() {
        return m_width;
    }

    public int getHeight() {
        return m_height;
    }
    
    // Constructor
    public Renderer(int width, int height, String title) {
        m_width  = width;
        m_height = height;

        // Create the Window
        try {
            Display.setDisplayMode(new DisplayMode(width, height)); // Display and DisplayMode check downloads on top
            Display.setFullscreen(false);
            Display.setVSyncEnabled(true);
            Display.create();
            Display.setTitle(title);
        } catch (LWJGLException e) {
            System.out.println("LWJGLException @ Renderer start");
            System.exit(0);
        }
        
        // Initialize OpenGL
        initGL();
        
        // Call onStart
        onStart();

        // Loop while running
        while (!Display.isCloseRequested()) {
            // Calculate how much time has elapsed
            long dT = m_elapsed.value();
            m_elapsed.reset();

            // Update
            onUpdate(dT);

            // Draw: Clear the screen and depth buffer
            GL11.glClear(GL11.GL_COLOR_BUFFER_BIT | GL11.GL_DEPTH_BUFFER_BIT | GL11.GL_STENCIL_BUFFER_BIT);
            GL11.glLoadIdentity();

            // Draw: 3D
            refresh3D();
            onDraw3D(dT);

            // Draw: 2D
            refresh2D();
            onDraw2D(dT);

            // Draw: update display
            Display.update();
    }

    // Free resources in onEnd
    onEnd();        
   
    // Destroy the Window
    Display.destroy();
    }
    
    public abstract void onStart();

    public abstract void onUpdate(long dT);

    public abstract void onDraw2D(long dT);

    public abstract void onDraw3D(long dT);

    public abstract void onEnd();
    
    void initGL() {        //it is here?
        // Set some default opengl settings        
        GL11.glShadeModel(GL11.GL_SMOOTH); // GL11 check downloads on top
        GL11.glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        GL11.glClearDepth(1.0f);
        GL11.glClearStencil(0);
        GL11.glEnable(GL11.GL_DEPTH_TEST);
        GL11.glDepthFunc(GL11.GL_LEQUAL);
        GL11.glHint(GL11.GL_PERSPECTIVE_CORRECTION_HINT, GL11.GL_NICEST);
        GL11.glDisable(GL11.GL_DITHER);

        GL11.glCullFace(GL11.GL_BACK);
        GL11.glEnable(GL11.GL_CULL_FACE);

        GL11.glPixelStorei(GL11.GL_UNPACK_ALIGNMENT, 1);

        GL11.glColor3f(1.0f, 1.0f, 1.0f);
    }
}
